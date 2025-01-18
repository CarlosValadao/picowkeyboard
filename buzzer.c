#include <stdio.h>
#include "buzzer.h"
#include "pico/stdlib.h"
#include "hardware/pwm.h"
#include "hardware/timer.h"

#define button_B 6 //TROCAR POR BOTÃO DO TECLADO NUMERICO 4X4
#define buzzer 28
#define frequencia 500

static volatile uint a = 1;

int tempo_buzzer_on = 300;

void set_frequency(uint gpio, uint frequency) {
    // Configurar o GPIO para PWM
    gpio_set_function(gpio, GPIO_FUNC_PWM);
    // Obter o slice do PWM para o GPIO
    uint slice_num = pwm_gpio_to_slice_num(gpio);
    // Configurar a frequência
    uint32_t clock_freq = 125000000; // Frequência do clock (125 MHz no Pico)
    uint32_t divider = clock_freq / (frequency * 65536); // Divisor para a frequência desejada
    if (divider < 1)
        divider = 1; // Evitar divisão menor que 1
    pwm_config config = pwm_get_default_config();
    pwm_config_set_clkdiv(&config, divider); // Configurar o divisor do clock
    pwm_init(slice_num, &config, true); // Iniciar o PWM
    // Configurar a duty cycle (50% para som contínuo)
    pwm_set_gpio_level(gpio, 32768); // Meio do ciclo (50%)
}

//rotina da interrupção
static void On_Off_Buzzer(uint gpio, uint32_t events){
    a++;
    if(a%2 == 0){
        set_frequency(buzzer, frequencia);
    }else {
        pwm_set_gpio_level(buzzer, 0);
    }
 }

void config_buzzer(){
    gpio_init(buzzer);
    gpio_set_dir(buzzer, GPIO_OUT);
}

int main() {
    config_buzzer();

    gpio_init(button_B);///TROCAR POR BOTÃO DO TECLADO NUMERICO 4X4
    gpio_set_dir(button_B, GPIO_IN);//TROCAR POR BOTÃO DO TECLADO NUMERICO 4X4
    gpio_pull_up(button_B);//TROCAR POR BOTÃO DO TECLADO NUMERICO 4X4
    
    //interrupção da gpio habilitada
    //ligar buzzer
    gpio_set_irq_enabled_with_callback(button_B, GPIO_IRQ_EDGE_FALL, 1, & On_Off_Buzzer);
}
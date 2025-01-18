#include <stdio.h>
#include "pico/stdlib.h"
#include "rgb.h"
#include "keyboard4x4.h"
#include "buzzer.h"

int main()
{

    //Definição dos pinos do LED RGB
    rgbpins rgb_led = {13, 12, 11}; //Pinos GPIO 13, 12 e 11 (red, green e blue)

    //Inicialização dos pinos do LED RGB
    rgb_init(&rgb_led);

    stdio_init_all();

    while (true) {
        char key = keyboard_get_pressed_key();
        if (key != 0) {
            printf("Tecla pressionada: %c\n", key);
            if (key == 'A') {
                rgb_turn_on_red(&rgb_led);
            }
        }
    }
}

#include <stdio.h>
#include "pico/stdlib.h"
#include "rgb.h"
#include "keyboard4x4.h"
#include "buzzer.h"

#define HOLD_UNTIL_RELEASED(key, keyboard) while(keyboard_get_pressed_key(keyboard) == (key))
#define BUZZER_PIN 28
#define BEEP_DURATION_MS 100

int main()
{

    //Definição dos pinos do LED RGB
    rgbpins rgb_led = {13, 12, 11}; //Pinos GPIO 13, 12 e 11 (red, green e blue)
    uint columns[4] = {4, 5, 6, 7};
    uint rows[4] = {9, 14, 2, 3};
    char KEY_MAP[16] = {
        '1', '2', '3', 'A',
        '4', '5', '6', 'B',
        '7', '8', '9', 'C',
        '*', '0', '#', 'D'
    };

    keyboard4x4 *keyboard;

    //Inicialização dos pinos do LED RGB
    rgb_init(&rgb_led);
    keyboard = keyboard_init(columns, rows, KEY_MAP);
    buzzer_init(BUZZER_PIN);
    stdio_init_all();
    char key = '\0';
    while (true) {
        key = keyboard_get_pressed_key(keyboard);
        if (key != '\0') {
            printf("Tecla pressionada: %c\n", key);
            if (key == 'A') {
              rgb_turn_on_red(&rgb_led);
              HOLD_UNTIL_RELEASED('A', keyboard);
              rgb_turn_off_red(&rgb_led);
            }
            else if(key == 'B')
            {
              rgb_turn_on_blue(&rgb_led);
              HOLD_UNTIL_RELEASED('B', keyboard);
              rgb_turn_off_blue(&rgb_led);
            }
            else if(key == 'C')
            {
              rgb_turn_on_green(&rgb_led);
              HOLD_UNTIL_RELEASED('C', keyboard);
              rgb_turn_off_green(&rgb_led);
            }
            else if(key == 'D')
            {
                rgb_turn_on_white(&rgb_led);
                HOLD_UNTIL_RELEASED('D', keyboard);
                rgb_turn_off_white(&rgb_led);
            }
            else if(key == '#')
            {
              buzzer_beep(BUZZER_PIN, BEEP_DURATION_MS);
            }         
            sleep_ms(150);
        }
    }
}

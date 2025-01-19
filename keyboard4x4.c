#include "keyboard4x4.h"
#include <stdlib.h>

#define HIGH 1
#define LOW  0

typedef struct {
    uint *columns;
    uint *rows;
    char *KEY_MAP;
} keyboard4x4;

keyboard4x4 *keyboard_init(uint columns[4], uint rows[4], const char keyboard_values[16])
{
    keyboard4x4 *keyboard = malloc(sizeof(keyboard4x4));
    keyboard->columns = columns;
    keyboard->rows = rows;
    keyboard->KEY_MAP = keyboard_values;
    for(uint i = 0; i < 4; i++)
    {
        gpio_init(rows[i]);
        gpio_init(columns[i]);
        gpio_set_dir(rows[i], GPIO_OUT);
        gpio_set_dir(columns[i], GPIO_IN);
        gpio_put(rows[i], HIGH);
        gpio_pull_up(columns[i]);
    }
    return keyboard;
}

char keyboard_get_pressed_key(const keyboard4x4 *keyboard)
{
    return '\0';
}
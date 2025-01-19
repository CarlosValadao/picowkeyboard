#include "keyboard4x4.h"

typedef struct {
    uint columns[4];
    uint rows;
    const char *const KEY_MAP;
} keyboard4x4;

keyboard4x4 *keyboard_init(uint columns[4], uint rows[4], const char keyboard_values[16])
{
    return;
}

char keyboard_get_pressed_key(const keyboard4x4 *keyboard)
{
    return '\0';
}
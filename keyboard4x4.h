#ifndef KEYBOARD4X4_H
#define KEYBOARD4X4_H

#include "pico/stdlib.h"

/** 
 * @file keyboard4x4.h
 * @brief Este arquivo contém declarações de funções e definições relacionadas a um
 *        teclado matricial 4x4 conectado ao pino GPIO
 *
 * @author Carlos Valadao
 * @date 17/01/2025
 */

extern uint _columns[4];
extern uint _rows[4];
extern uint _keyboard_values[16];

void keyboard_init(uint columns[4], uint rows[4], char keyboard_values[16]);
char keyboard_get_pressed_key();

#endif
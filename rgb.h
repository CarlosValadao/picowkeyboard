#ifndef RGB_H
#define RGB_H

#include "pico/stdlib.h"

/** 
 * @file rgb.h
 * @brief Este arquivo contém declarações de funções e definições relacionadas a um
 *        LED RGB conectado aos pinos GPIO
 *
 * @author Carlos Valadao
 * @date 17/01/2025
 */

void rgb_init(uint red, uint green, uint blue);
void rgb_turn_on_red(uint red, uint green, uint blue);
void rgb_turn_off_red(uint red, uint green, uint blue);
void rgb_turn_on_green(uint red, uint green, uint blue);
void rgb_turn_off_green(uint red, uint green, uint blue);
void rgb_turn_on_blue(uint red, uint green, uint blue);
void rgb_turn_off_blue(uint red, uint green, uint blue);
void rgb_blink(uint red, uint green, uint blue);

#endif
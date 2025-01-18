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

typedef struct
{
    uint red;
    uint green;
    uint blue;
} rgbpins;


void rgb_init(rgbpins pins);
void rgb_turn_on_red(rgbpins pins);
void rgb_turn_off_red(rgbpins pins);
void rgb_turn_on_green(rgbpins pins);
void rgb_turn_off_green(rgbpins pins);
void rgb_turn_on_blue(rgbpins pins);
void rgb_turn_off_blue(rgbpins pins);
void rgb_blink(rgbpins pins);

#endif
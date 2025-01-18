#ifndef BUZZER_H
#define BUZZER_H

#include "pico/stdlib.h"

/** 
 * @file rgb.h
 * @brief Este arquivo contém declarações de funções e definições relacionadas a um
 *        buzzer conectado aos pinos GPIO
 *
 * @author Carlos Valadao
 * @date 17/01/2025
 */

void buzzer_init(uint buzzer_pin);
void buzzer_beep(uint duration);

#endif
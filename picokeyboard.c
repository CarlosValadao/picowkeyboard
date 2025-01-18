#include <stdio.h>
#include "pico/stdlib.h"
#include "rgb.h"
#include "keyboard4x4.h"
#include "buzzer.h"

int main()
{
    stdio_init_all();

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}

#ifndef LED_DRIVER_H
#define LED_DRIVER_H

// Include guards for standard headers

#ifndef STDINT_H
#define STDINT_H
#include <stdint.h>
#endif

// Include Pico SDK stdlib only once
#ifndef PICO_STDIO_H
#define PICO_STDIO_H
#include <stdio.h>
#endif

// Definitions for LED IDS
#define LED_ID_red 17
#define LED_ID_green 18
#define LED_ID_blue 19

void LED_Init(uint8_t led_id);
void LED_On(uint8_t led_id);
void LED_Off(uint8_t led_id);
void LED_Toggle(uint8_t led_id);

#endif // LED_DRIVER_H

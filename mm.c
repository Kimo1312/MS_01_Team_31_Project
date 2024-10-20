#include "pico/stdlib.h"
#include "Led_Driver.h" // Include the LED driver header

int main()
{
    // Initialize stdio for debugging if needed
    stdio_init_all();

    // Initialize the LEDs (Red, Green, Blue) using their IDs
    LED_Init(LED_ID_red);   // Red LED
    LED_Init(LED_ID_green); // Green LED
    LED_Init(LED_ID_blue);  // Blue LED (Negative logic)

    // Ensure the blue LED is turned off at the start
    //LED_On(LED_ID_blue); // Set blue LED to high (off)

    // Main loop to continuously control the LEDs
    while (1)
{
    // Turn off all LEDs for 5 seconds at the start
    LED_Off(LED_ID_red);
    LED_Off(LED_ID_green);
    LED_On(LED_ID_blue); // Keep blue LED off
    sleep_ms(5000); // Delay for 5 seconds

    // Turn on Red LED for 1 second, then turn it off
    LED_On(LED_ID_blue); // Blue LED off
    LED_On(LED_ID_red);
    sleep_ms(1000); // Delay for 1 second
    LED_Off(LED_ID_red);

    // Turn on Green LED for 1 second, then turn it off
    LED_On(LED_ID_green);
    sleep_ms(1000); // Delay for 1 second
    LED_Off(LED_ID_green);

    // Turn on Blue LED for 1 second, then turn it off (Negative logic)
    LED_On(LED_ID_blue); // Blue LED off
    sleep_ms(1000); // Delay for 1 second
    LED_Off(LED_ID_blue);  // Blue LED on

    // Turn on all LEDs together for 2 seconds, then turn them off
    //LED_On(LED_ID_red);
    //LED_On(LED_ID_green);
    LED_Off(LED_ID_blue); // Blue LED on
    sleep_ms(1000); // Delay for 1 seconds
    LED_On(LED_ID_blue);

    // Turn on all LEDs
    LED_On(LED_ID_red);
    LED_On(LED_ID_green);
    LED_Off(LED_ID_blue);  // Blue LED off
    sleep_ms(2000); // Delay for 2 seconds
}
}

/*
#include "pico/stdlib.h"
#include "Led_Driver.h" // Include the LED driver header

int main()
{
    // Initialize stdio for debugging if needed
    stdio_init_all();

    // Initialize the LEDs (Red, Green, Blue) using their IDs
    LED_Init(LED_ID_red);   // Red LED
    LED_Init(LED_ID_green); // Green LED
    LED_Init(LED_ID_blue);  // Blue LED (Negative logic)

    // Main loop to continuously control the LEDs
    while (1)
    {
        // Turn off all LEDs for 5 seconds at the start
        LED_Off(LED_ID_red);
        LED_Off(LED_ID_green);
        // Inverse logic for blue LED (High -> LED off)
        LED_On(LED_ID_blue); // Turn blue LED off
        sleep_ms(5000); // Delay for 5 seconds

        // Turn on Red LED for 1 second, then turn it off
        LED_Off(LED_ID_blue);
        LED_On(LED_ID_red);
        sleep_ms(1000); // Delay for 1 second
        LED_Off(LED_ID_red);

        // Turn on Green LED for 1 second, then turn it off
        LED_On(LED_ID_green);
        sleep_ms(1000); // Delay for 1 second
        LED_Off(LED_ID_green);

        // Turn on Blue LED for 1 second, then turn it off (Negative logic)
        LED_Off(LED_ID_blue); // Blue LED on (Low -> LED on)
        sleep_ms(1000); // Delay for 1 second
        LED_On(LED_ID_blue);  // Blue LED off (High -> LED off)

        // Turn on all LEDs together for 2 seconds, then turn them off
        LED_On(LED_ID_red);
        LED_On(LED_ID_green);
        LED_Off(LED_ID_blue); // Blue LED on (Low -> LED on)
        sleep_ms(2000); // Delay for 2 seconds

        // Turn off all LEDs
        LED_Off(LED_ID_red);
        LED_Off(LED_ID_green);
        LED_On(LED_ID_blue);  // Blue LED off (High -> LED off)

        // This entire sequence takes 10 seconds and repeats indefinitely
    }
}
*/
#include <stdint.h>            //include this library for the integer operations
#include <stdbool.h>            //include this library for the boolean operations
#include <avr/io.h>
#include <avr/interrupt.h>


int main(void)
{

    DDRB = DDRB | (1<<PB5);

    while(1)
    {
        PORTB = PORTB | (1<<PB5);
    }

    return 0;

}

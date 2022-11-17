/*
 * Lab_6.c
 *
 * Created: 30/03/2022 3:58:01 pm
 * Author : Ahmed Ali
 * Regis  : 20mdele135
 */ 

#include <avr/io.h>

int main(void)
{
	DDRA = 0x00; //input
	PORTA = 0xFF; // pull ups
	DDRB = 0xFF; // output
	unsigned char ch;
    /* Replace with your application code */
    while (1) 
    {
		ch = PINA;
		PORTB = ch;
    }
}


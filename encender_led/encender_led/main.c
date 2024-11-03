/*
 * encender_led.c
 *
 * Created: 03/11/2024 01:37:03 p.m.
 * Author : loren
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB |= (1<<5);  //Se declara como pin de salida. También se pudo escribir como DDRB |= (1<<DDB5);
	DDRC &=~ (1<<3); //Se declara como pin de entrada
	
    while (1) 
    {
		if(PINC & (1<<PINC3)){ //Lectura del pin
			PORTB |= (1<<PORTB5);  //Se coloca en alto el pin
		}
		else{
			PORTB &=~ (1<<PORTB5); //Se coloca en bajo el pin
		}
    }
}


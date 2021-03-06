/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * Bare minimum empty user application template
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# "Insert system clock initialization code here" comment
 * -# Minimal main function that starts with a call to board_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */
#include <asf.h>
#define F_CPU 16000000UL // 16MHz clock from the debug processor
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	//LED 0 on the board is connected to AVR port pin B5 (pin #17 on the 328P)
	DDRB |= (1<<DDB5); // Set port bit B5 in data direction register to 1: an OUTput
	while(1)
	{
		PORTB |= (1<<PORTB5); // Set port bit B5 to 1 to turn on the LED
		_delay_ms(200); // delay 100mS
		PORTB &= (0<<PORTB5); // Clear port bit B5 to 0 to turn off the LED
		_delay_ms(500); // delay 100mS
	}
}
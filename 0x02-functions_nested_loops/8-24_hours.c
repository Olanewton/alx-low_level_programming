#include "main.h"

/**
 * jack_bauer - function to prints every minute of the day
 * n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hours = a;
	int minutes = b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar (a / 10 + '0');
			_putchar (a % 10  '0');
			_putchar (':');
			_putchar (b / 10 + '0');
			_putchar (b % 10 + '0');
			_putchar ('\n');
		}
	}
}

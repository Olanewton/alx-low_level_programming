#include "main.h"

/**
 * print_last_digit - last digit of a given number
 * @n: The int to print
 *
 * Return: value of the last digit number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;

		_putchar (last_digit + '0');
		return (last_digit);
	}
}

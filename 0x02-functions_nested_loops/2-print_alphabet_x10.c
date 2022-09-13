#include "main.h"

/**
 *print_alphabet_x10 - function to print azc 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int m;
	char n;

	for (m = 0; m < 10; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(m);
		}
		_putchar('\n');

		return (0);
	}
}

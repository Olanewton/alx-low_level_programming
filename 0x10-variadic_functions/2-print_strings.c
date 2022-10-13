#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints of strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argis;
	unsigned int i;
	char *str;

	va_start(argis, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(argis, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(argis);
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a list of  types arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list argis;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(argis, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(",");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(argis, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(argis, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(argis, double)), c = 1;
				break;
			case 's':
				str = va_arg(argis, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(argis);
}

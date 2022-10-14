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
	unsigned int i;
	char *s, *separator;

	va_start(argis, format);

	separator = "";

		i = 0;
		while (format && formart[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(argis, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(argis, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(argis, double));
					break;
				case 's':
					s = va_arg(argis, char *);
					if (s == NULL)
						s = "(nill)";
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", "
			i++;
		}
		printf("\n");
		va_end(argis);
}

#include <stdio.h
#include "main.h">

/**
 *print_line - print a straight line
 *@n: parameter
 *Returnn:returns nothing
 */

voif print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}

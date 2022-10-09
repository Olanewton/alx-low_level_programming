#include "main.h"
#include <stdio.h>

/**
 * _abs - function to compute absolut value interger
 * @n: The int needed to print the function
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
	{
		return (n * (-1));
	}
}

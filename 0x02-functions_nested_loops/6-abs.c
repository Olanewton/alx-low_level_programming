#include "main.h"
#include <stdio.h>

/**
 * _abs - function to compute absolut value interger
 * @n: The int needed to print the function
 * Return: Always 0.
 */
int _abs(int j)
{
	if (j > 0 || j == 0)
	{
		return (j);
	}
	else
	{
		return (j * -1);
	}
}

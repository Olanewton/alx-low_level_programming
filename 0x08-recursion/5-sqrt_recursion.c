#include "main.h"
/**
 * _pow_recursion - a function that returns natural square root of a number
 * @x: The number to be raised
 * @y: The power
 *
 * Return: The value of x raised to the power of y
 */
int _sqrt_recursion(int n)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}

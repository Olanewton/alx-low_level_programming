#include <stdio.h>
#include "main.h"

/**
 * main - program that prints either number
 * or fizz or buzz or fizzbuzz
 *
 *
 * Return: returns 0
 */

int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("fizzbuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("buzz ");
			}
			else
			{
				printf("buzz ");
			}
		}
	}
}

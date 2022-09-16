#include <stdio.h>
#include "main.h"

/**
 * main - program that prints either number
 * or fizz or buzz or fizzbuzz
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzbuzz");
		}
		else if (i == 1)
			{
				printf("%d", i);
			}
		else
			{
				printf(" %d", i);
			}
	}
	printf("\n");

	return (0);
}

#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - prints the consecutive caracters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
<<<<<<< HEAD

	reuturn(0);
=======
	return (0);
>>>>>>> 752e8ad3088c7f2f4f4d636797a2e95b47819b81
}

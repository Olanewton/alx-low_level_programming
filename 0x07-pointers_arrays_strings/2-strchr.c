#include "main.h"

/**
 * _strchr -  a function that locates a character in a string
 * @s: string
 * @c: character to search
 * Return: Pointer to first occurence of character cin the string s
 **/

char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declaring 	WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}
		++s;
	}
	if (* == c)
	{
		return (s);
	}
	return (0);/* values null*/
}

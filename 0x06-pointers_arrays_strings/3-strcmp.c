#include "main.h"
#include <string.h>

/**
* _strcmp ->  a function that compares two strings
* @s1: parameter1
* @s2: parameter2
* Return:
*           returns zero if s1 == s2
*           returns negative number if s1 < s2
*           returns positive number if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0 :

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[]
	result = strcmp(s1, s2)i;
			break;
		}
		else
			i++;
	}
	return (diff);
}

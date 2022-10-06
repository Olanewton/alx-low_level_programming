#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
<<<<<<< HEAD
	if (num < 0) /* account for negative n bytes */
		return (NULL);
	if (num >= _strlen(s2) /* account for n too big */
			num = _strlen(s2);

	len = _strlen(s1) + num + 1; /* +1 to account for null pointer */

	ptr = malloc(sizeof(*ptr) * len); /* malloc and check for error */
	if (ptr == NULL)
	return (NULL);

	for (i = 0; s1[i] != '\0'; i++) /* concat */
	ptr[i] = s1[i];
	for (j = 0; j < num; j++)
	ptr[i + j] = s2[j];
	ptr[i + j] = '\0';	
	return (ptr);
=======

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
	n = size2;
	p = malloc((size1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		p[i] = s2[i - size1];
	}
	p[i] = '\0';

return (p);
>>>>>>> 232c56845cb2f62c05f09b16f50a5e3ad98f2a20
}

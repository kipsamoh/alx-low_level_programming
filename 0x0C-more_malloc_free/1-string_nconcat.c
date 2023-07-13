#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates strings.
 * @s1: string 1 input
 * @s2: string 2 input
 * @n:	length of string 2.
 *
 * Return: pointer of allocated mem.
 * if allocation failed, exit status is set to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *stringconcat;
	unsigned int w, x, y, z;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (w = 0; s1[w] != '\0'; w++)
		;

	for (x = 0; s2[x] != '\0'; x++)
		;

	if (n > x)
		n = x;

	y = w + n;

	stringconcat = malloc(y + 1);

	if (stringconcat == NULL)
		return (NULL);

	for (z = 0; z < y; z++)
		if (z < w)
			stringconcat[z] = s1[z];
		else
			stringconcat[z] = s2[z - w];

	stringconcat[z] = '\0';

	return (stringconcat);
}

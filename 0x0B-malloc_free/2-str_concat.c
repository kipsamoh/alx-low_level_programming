#include "main.h"
#include <stdlib.h>

/**
 * str_concat - appends one string on another
 * @s1: string 1 input
 * @s2: string 2 input
 *
 * Return: pointer array of string
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int a;
	unsigned int b;
	unsigned int c;
	unsigned int max;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	concatenated = malloc(sizeof(char) * (a + b + 1));

	if (concatenated == NULL)
	{
		free(concatenated);
		return (NULL);
	}

	for (c = 0; c < a; c++)
		concatenated[c] = s1[c];

	max = b;
	for (b = 0; b <= max; c++, b++)
		concatenated[c] = s2[b];

	return (concatenated);
}

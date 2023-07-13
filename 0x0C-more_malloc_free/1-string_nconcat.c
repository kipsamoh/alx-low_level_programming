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
	unsigned int a, b, i;
	char *concatenated;

	if (s1 == NULL)
		a = 0;
	else
	for (a = 0; s1[a]; ++a)
	if (s2 == NULL)
		b = 0;
	else
	for (b = 0; s2[b]; ++b)
	if (b > n)
		b = n;
	concatenated = malloc(sizeof(char) * (a + b + 1));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
		concatenated[i] = s1[i];
	for (i = 0; i < b; i++)
		concatenated[i + a] = s2[i];
	concatenated[a + b] = '\0';
	return (concatenated);
}

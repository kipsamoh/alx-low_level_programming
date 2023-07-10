#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to duplicated string.
 * @str: input string
 *
 * Return: pointer pointer to duplicated array of string
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int a, b;

	if (str == 0)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	duplicate = (char *)malloc(sizeof(char) * (a + 1));

	if (duplicate == 0)
		return (NULL);

	for (a = 0; b <= a; b++)
		duplicate[b] = str[b];

	return (duplicate);
}

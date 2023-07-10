#include "main.h"
#include <stdlib.h>
/**
 * create_array - makes an array of characters.
 * @size: array size
 * @c: character to input array
 *
 * Return: pointer to array of characters
 */
char *create_array(unsigned int size, char c)
{
	char *characters;
	unsigned int a;

	if (size == 0)
		return (NULL);

	characters = malloc(sizeof(c) * size);

	if (characters == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		characters[a] = c;

	return (characters);
}

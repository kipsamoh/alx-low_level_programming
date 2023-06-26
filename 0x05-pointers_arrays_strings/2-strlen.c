#include "main.h"

/**
 * _strlen - ouputs the lenght of string.
 * @s: input string.
 * Return: string length.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + lenght) != '\0')
		length++;
	return (length);
}

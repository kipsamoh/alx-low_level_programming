#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string.
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: final location.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (a >= 0)
	{
		*(dest + a) = *(src + a);
		if (*(src + a) == '\0')
			break;
		a++;
	}
	return (dest);
}

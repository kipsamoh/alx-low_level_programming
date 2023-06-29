#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: bytes used from src.
 * Return: dest pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	int sum = 0, sum2 = 0;

	while (*(dest + sum) != '\0')
	{
		sum++;
	}

	while (sum2 < n)
	{
		*(dest + sum) = *(src + sum2);
		if (*(src + sum2) == '\0')
			break;
		sum++;
		sum2++;
	}
	return (dest);
}

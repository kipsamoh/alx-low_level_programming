#include "main.h"
/**
 * _memset - fill a block of memory n times.
 * @s: first memory address.
 * @b: the constant byte t fill memory
 * @n: number of bytes
 *
 * Return:pointer to filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

#include "main.h"
/**
 *_memcpy - function to copy memory area
 *@dest: memory to store copied memory
 *@src: memory to copy from
 *@n: number of bytes to copy
 *
 *Return: pointer to copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}


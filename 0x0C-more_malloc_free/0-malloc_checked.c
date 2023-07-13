#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory and checks if successful.
 * @b: number of bytes to allocate.
 *
 * Return: pointer of the allocated mem.
 *if allocation fails, exit value is set to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

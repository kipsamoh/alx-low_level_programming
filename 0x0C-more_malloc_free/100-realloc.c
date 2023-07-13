#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate mem block.
 * @ptr: pointer of previously allocated mem.
 * @old_size: size of old allocated mem
 * @new_size: size of the new allocated mem.
 *
 * Return: pointer to new mem.
 * if new_size == old_size,return unchanged pointer.
 * if allocation fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}

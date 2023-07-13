#include <stdlib.h>
/**
 * _calloc - array mem allocator
 * @nmemb: elements number in an
 * @size: size of elements in bytes
 *
 * Return:allocated memory pointer 
 * when nmemb and size is 0, returns NULL.
 * when allocation fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		ptr[a] = 0;

	return (ptr);
}

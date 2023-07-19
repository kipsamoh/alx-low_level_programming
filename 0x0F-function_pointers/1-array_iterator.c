#include "function_pointers.h"

/**
 * array_iterator - output each elements of array
 * @array: array of intergers input
 * @size: array size
 * @action: function pointer
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
		for (a = 0; a < size; a++)
			action(array[i]);
}

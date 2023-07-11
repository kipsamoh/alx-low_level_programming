#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory to 2D array of intergers.
 * @width: rows input
 * @height: columns input.
 *
 * Return: array pointer.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		array[a] = malloc(width * sizeof(int));
		if (array[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(array[a]);
			free(array);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			array[a][b] = 0;

	return (array);
}

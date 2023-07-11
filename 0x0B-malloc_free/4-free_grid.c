#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory of 2D array.
 * @grid: 2D array of intergers
 * @height: columns of the array
 *
 * Return: null
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}

#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees memory for 2D array
 * @grid: array
 * @height: columns of array
 *
 * Return: void
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - cuts string into words.
 * @str: input string
 *
 * Return: array pointer
 */
char **strtow(char *str)
{
	char **words;
	unsigned int a, height, b, c, d;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (a = height = 0; str[a] != '\0'; a++)
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			height++;
	words = malloc((height + 1) * sizeof(char *));
	if (words == NULL || height == 0)
	{
		free(words);
		return (NULL);
	}
	for (b = d = 0; b < height; b++)
	{
		for (a = d; str[a] != '\0'; a++)
		{
			if (str[a] == ' ')
				d++;
			if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			{
				words[b] = malloc((a - d + 2) * sizeof(char));
				if (words[b] == NULL)
				{
					ch_free_grid(words, b);
					return (NULL);
				}
				break;
			}
		}
		for (c = 0; d <= a; d++, c++)
			words[b][c] = str[d];
		words[b][c] = '\0';
	}
	words[b] = NULL;
	return (words);
}

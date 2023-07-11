#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments
 * @ac: counter of arguments
 * @av: argument array
 *
 * Return: array of char pointer
 */
char *argstostr(int ac, char **av)
{
	char *chararray;
	int a, b, c, d;

	if (ac == 0)
		return (NULL);

	for (a = b = 0; b < ac; b++)
	{
		if (av[b] == NULL)
			return (NULL);

		for (c = 0; av[b][c] != '\0'; c++)
			b++;
		c++;
	}

	chararray = malloc((a + 1) * sizeof(char));

	if (chararray == NULL)
	{
		free(chararray);
		return (NULL);
	}

	for (b = c = d = 0; d < a; b++, d++)
	{
		if (av[b][c] == '\0')
		{
			chararray[d] = '\n';
			b++;
			d++;
			c = 0;
		}
		if (d < a - 1)
			chararray[d] = av[b][c];
	}
	chararray[d] = '\0';

	return (chararray);
}

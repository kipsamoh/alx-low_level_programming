#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates programs
 * @ac: counter input
 * @av: array vector
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d = 0;
	char *cararray;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;

	cararray = malloc(sizeof(char) * d + 1);
	if (cararray == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		cararray[c] = av[a][b];
		d++;
	}
	if (cararray[c] == '\0')
	{
		cararray[c++] = '\n';
	}
	}
	return (cararray);
}

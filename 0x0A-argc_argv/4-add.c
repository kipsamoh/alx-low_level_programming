#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - sums +ve numbers.
 * @argc: arguments counter
 * @argv: arguments array
 * Return: 0 - successful
 */
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - outputs minimum number of coins to give change for an amount.
 * @argc: arguments counter
 * @argv: arguments array
 *
 * Return: 0 for sucess and 1 Error
 */
int main(int argc, char *argv[])
{
	int digit, a, total;
	int coins[] = {50, 20, 10, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	digit = atoi(argv[1]);
	total = 0;

	if (digit < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && digit >= 0; a++)
	{
		while (digit >= coins[a])
		{
			total++;
			digit -= coins[a];
		}
	}

	printf("%d\n", total);
	return (0);
}

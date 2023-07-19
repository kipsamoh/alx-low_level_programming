#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own op codes.
 * @argc: argument count.
 * @argv: pointer argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opcodes = (char *) main;
	int a, size;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (a = 0; a < size; a++)
	{
		printf("%02x", opcodes[a] & 0xFF);
		if (a != size - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}

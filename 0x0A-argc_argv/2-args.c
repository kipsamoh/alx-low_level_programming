#include <stdio.h>
#include "main.h"
/**
 * main - outputs all arguments in argv array.
 * @argc: arguments counter
 * @argv: arguments array
 * Return: 0 - successful
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}

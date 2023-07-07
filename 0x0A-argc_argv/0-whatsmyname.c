#include <stdio.h>
#include "main.h"

/**
 * main - ouputs the name of the program
 * @argc: arguments counter
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

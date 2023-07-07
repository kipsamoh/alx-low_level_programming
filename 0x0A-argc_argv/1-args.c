#include <stdio.h>
#include "main.h"
/**
 * main - ouputs the number of arguments.
 * @argc: arguments counter.
 * @argv: arguments array
 * Return: 0 - successful
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

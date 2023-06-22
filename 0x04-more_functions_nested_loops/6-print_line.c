#include "holberton.h"

/**
 * print_line - ouputs straight line
 * @n: number of times n is output.
 * Return: void
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar(92);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_diagonal - ouputs diagonal line n times.
 * @n: the times diagonal line is output.
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\');
		if (a < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_line - outputs straight line on terminal
 * @n: times straight line is printed.
 * Return: empty.
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

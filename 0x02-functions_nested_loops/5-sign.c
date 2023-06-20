#include "main.h"

/**
 * print_sign - checks if num is less,equal or greater than 0.
 *
 * @n: num to be checked as int
 *
 * Return: 1 is when > 0, 0 =0 and -1 is when < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

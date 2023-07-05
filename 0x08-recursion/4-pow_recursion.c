#include "main.h"

/**
 * _pow_recursion - outputs result of x to power of  y.
 * @x: input base
 * @y: input exponent
 * Return: result of base to exponent
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

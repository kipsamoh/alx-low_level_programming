#include "main.h"

int actual_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion - outputs natural square root of num'
 * @n: number input.
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - looks for a natural
 * square root.
 * @n: number input
 * @a: counter
 *
 * Return: square root
 */
int actual_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (actual_sqrt_recursion(n, a + 1));
}

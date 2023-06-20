#include "main.h"

/**
 * print_last_digit - outputs the last digit of num
 * @n: interger giving out last digit
 * Return: last digit value
 */
int print_last_digit(int n)
{
	int b;

	if (n < 0)
	n = -n;

	b = n % 10;

	if (b < 0)
		b = -b;

	_putchar(b + '0');

	return (b);
}

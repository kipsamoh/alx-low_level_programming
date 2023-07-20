#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments.
 * @n: number of arguments.
 *
 * Return: sum of parameters passed.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argumentlist;
	unsigned int a;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(argumentlist, n);

	for (a = 0; a < n; a++)
		sum = sum + va_arg(argumentlist, int);

	va_end(argumentlist);

	return (sum);
}

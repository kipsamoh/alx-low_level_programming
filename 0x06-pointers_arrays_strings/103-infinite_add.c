#include "main.h"
#include <stdio.h>
/**
 * infinite_add - sums two nums
 * @n1: num1
 * @n2: num2
 * @r: buffer storing function
 * @size_r: buffer size:
 * Return:  dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, c, d, e, f, sum = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	if (a >= b)
		d = a;
	else
		d = b;
	if (size_r <= d + 1)
		return (0);
	r[d + 1] = '\0';
	a--, b--, size_r--;
	e = *(n1 + a) - 48, f = *(n2 + b) - 48;
	while (d >= 0)
	{
		c = e + f + sum;
		if (c >= 10)
			sum = c / 10;
		else
			sum = 0;
		if (c > 0)
		*(r + d) = (c % 10) + 48;
		else
			*(r + d) = '0';
		if (a > 0)
			a--, e = *(n1 + a) - 48;
		else
			e = 0;
		if (b > 0)
			b--, f = *(n2 + b) - 48;
		else
			f = 0;
		d--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

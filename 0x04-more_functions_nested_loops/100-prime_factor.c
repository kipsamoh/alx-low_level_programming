#include <stdio.h>

/**
 * main - outputs largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int a, bc;

	a = 612852475143;
	for (bc = 2; bc <= a; bc++)
	{
		if (a % bc == 0)
		{
			a /= bc;
			bc--;
		}
	}
	printf("%ld\n", bc);
	return (0);
}

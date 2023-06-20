#include <stdio.h>

/**
 * main - outputs the sum of even valued fibonacci nums.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int b1, b2, cb, dcb;

	b1 = 1;
	b2 = 2;
	cb = dcb = 0;
	while (cb <= 4000000)
	{
		cb = b1 + b2;
		b1 = b2;
		b2 = cb;
		if ((b1 % 2) == 0)
		{
			dcb += b1;
		}
	}
	printf("%ld\n", dcb);
	return (0);
}

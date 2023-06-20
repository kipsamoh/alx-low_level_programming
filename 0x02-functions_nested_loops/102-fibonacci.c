#include <stdio.h>

/**
 * main - outputs the sum of fibonnaci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	long int b1, b2, cb;

	b1 = 1;
	b2 = 2;
	printf("%ld, %ld", b1, b2);
	for (a = 0; a < 48; a++)
	{
		cb = b1 + b2;
		printf(", %ld", cb);
		b1 = b2;
		b2 = cb;
	}
	printf("\n");
	return (0);
}

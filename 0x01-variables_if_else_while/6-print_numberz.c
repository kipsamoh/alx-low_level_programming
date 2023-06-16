#include <stdio.h>

/**
 * main - displays digits 0- 9.
 *
 * Return: When 0 its successful
 */
int main(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}

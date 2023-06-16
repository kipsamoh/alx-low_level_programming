#include <stdio.h>

/**
 * main - ouputs digits 0-9.
 *
 * Return: 0 means successful
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		printf("%d", b);
	}
	putchar('\n');
	return (0);
}

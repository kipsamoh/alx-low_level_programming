#include <stdio.h>

/**
 * main - ouputs alphabet in reverse.
 *
 * Return: When 0 means successful
 */
int main(void)
{
	int b;

	for (b = 122; b > 96; b--)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}

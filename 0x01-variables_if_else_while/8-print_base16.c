#include <stdio.h>

/**
 * main - outputs 0-9 and letters a-f.
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
	for (b = 97; b < 103; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - outputs except for q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 97; b < 123; b++)
	{
		if (b != 101 && b != 113)
		{
			putchar(b);
		}
	}
	putchar('\n');
	return (0);
}

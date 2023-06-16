#include <stdio.h>

/**
 * main - ouputs alphabet.
 *
 * Return: When 0 successful
 */
int main(void)
{
	int b;
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (b = 0; b < 52; b++)
	{
		putchar(alp[b]);
	}
	putchar('\n');
	return (0);
}

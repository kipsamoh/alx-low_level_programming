#include <stdio.h>

/**
 * main - ouputs alphabet.
 *
 * Return: when 0 successful
 */
int main(void)
{
	int b;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (b = 0; b < 26; b++)
	{
		putchar(alp[b]);
	}
	putchar('\n');
	return (0);
}

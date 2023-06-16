#include <stdio.h>

/**
 * main - outputs digits 00-89.
 *
 * Return: When 0 its successful
 */
int main(void)
{
	int b, c;

	c = 48;
	b = 48;

	while (c < 58)
	{
		b = 48;
		while (b < 58)
		{
			if (c != b && c < b)
			{
				putchar(c);
				putchar(b);
				if (b == 57 && c == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}

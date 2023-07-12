#include <stdio.h>

/**
 * main - ouputs nums from 00-99
 *
 * Return: 0 (successful)
 */
int main(void)
{
int a = 48;
while (a < 58)
{
	int b = a + 1;
	while (b < 58)
	{
		int x1 = a / 10;
		int x2 = a % 10;
		int y1 = b / 10;
		int y2 = b % 10;
		{
			putchar(x1);
			putchar(x2);
			putchar(' ');
			putchar(y1);
			putchar(y2);
			if (a == 56 && b == 57)

			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	b++;
}
a++;
putchar('\n');
return (0);
}

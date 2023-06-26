#include "main.h"

/**
 * _atoi - changes string to integer
 * @s: string to be converted
 *
 * Return: converted string
 */
int _atoi(char *s)
{

	int a = 0;
	int b = 0;
	int c = 0;
	int len = 0;
	int e = 0;
	int digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && e == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}

	if (e == 0)
		return (0);

	return (c);
}

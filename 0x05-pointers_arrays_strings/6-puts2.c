#include "main.h"
/**
 * puts2 - outputs one char from two starting with the first only.
 * @str: input char
 * Return: print
 */
void puts2(char *str)
{
	int length = 0;
	int a = 0;
	char *b = str;
	int c;

	while (*b != '\0')
	{
		b++;
		length++;
	}
	a = length - 1;
	for (c = 0 ; c <= a ; c++)
	{
		if (c % 2 == 0)
	{
		_putchar(str[c]);
	}
	}
	_putchar('\n');
}


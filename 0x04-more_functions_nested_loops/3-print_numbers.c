#include "main.h"

/**
 * print_numbers - output numbers 0-9
 * Return: void(no return)
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

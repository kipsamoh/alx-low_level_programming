#include "main.h"

/**
 * print_sign - outputs the sign of num
 * @b: interger to determine
 * Return: 1 ouputs + if b is >zero
 * 0 ouputs 0 if b=0
 * -1 ouputs - if b is < zero
 */
int print_sign(int b)
{
	if (b > 0)
	{
		_putchar('+');
		return (1);
	} else if (b <0)
}
		_putchar('-');
		return (-1);
	} else if (b ==0)
	{
		_putchar('48');
	}
		return (0);
}

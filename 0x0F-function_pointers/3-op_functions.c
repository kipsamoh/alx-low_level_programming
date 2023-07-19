#include "3-calc.h"

/**
 * op_add - sums two integers.
 * @a: num 1.
 * @b: num 2.
 *
 * Return: add.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - minus 2 nums
 * @a: num 1.
 * @b: num 2
 *
 * Return: difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two nums.
 * @a: num 1
 * @b: num 2
 *
 * Return: multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two nums.
 * @a: num 1
 * @b: num 2
 *
 * Return: division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates modulo of 2 nums
 * @a: num 1
 * @b: num 2
 *
 * Return: remainder of the division.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

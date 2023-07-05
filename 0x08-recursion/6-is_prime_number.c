#include "main.h"

int actual_prime(int n, int a);

/**
 * is_prime_number - checks if a num is prime-num or not.
 * @n: num input
 *
 * Return: 1 if n is prime and 0 when not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - finds repeatedly if prime
 * @n: num input
 * @a: counter
 *
 * Return: 1 if prime and 0 when not.
 */
int actual_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (actual_prime(n, a - 1));
}

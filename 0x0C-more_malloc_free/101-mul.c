#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks for non digit
 * @s: string input
 *
 * Return: 0 if a non-digit , 1 otherwise
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - returns the len string
 * @s: string input
 *
 * Return: len
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - errors handler
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - mul two numbers
 * @argc: num of args
 * @argv: array args
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, x, move, digit1, digit2, *result, z = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (x = 0; x <= len1 + len2; x++)
		result[x] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		move = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			move += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = move % 10;
			move /= 10;
		}
		if (move > 0)
			result[len1 + len2 + 1] += move;
	}
	for (x = 0; x < len - 1; x++)
	{
		if (result[x])
			z = 1;
		if (z)
			_putchar(result[x] + '0');
	}
	if (!z)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

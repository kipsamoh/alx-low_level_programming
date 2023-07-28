#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - checks if num is 0
 * @argv: argument.
 *
 * Return: void.
 */
void _is_zero(char *argv[])
{
	int x, isn1 = 1, isn2 = 1;

	for (x = 0; argv[1][x]; x++)
		if (argv[1][x] != '0')
		{
			isn1 = 0;
			break;
		}

	for (x = 0; argv[2][x]; x++)
		if (argv[2][x] != '0')
		{
			isn2 = 0;
			break;
		}

	if (isn1 == 1 || isn2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - set mem to 0
 * @ar: char array.
 * @lar: length of the char array.
 *
 * Return: char array pointer.
 */
char *_initialize_array(char *ar, int lar)
{
	int x = 0;

	for (x = 0; x < lar; x++)
		ar[x] = '0';
	ar[lar] = '\0';
	return (ar);
}

/**
 * _checknum - determines len and if num is base 10
 * @argv: arguments vector.
 * @n: row of the array.
 *
 * Return: length of the number.
 */
int _checknum(char *argv[], int n)
{
	int len;

	for (len = 0; argv[n][len]; len++)
		if (!isdigit(argv[n][len]))
		{
			printf("Error\n");
			exit(98);
		}

	return (len);
}

/**
 * main - Entry point.
 * program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int len1, len2, lenout, add, addl, i, j, k, ca;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	len1 = _checknum(argv, 1), len2 = _checknum(argv, 2);
	_is_zero(argv), lenout = len1 + len2, nout = malloc(lenout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = _initialize_array(nout, lenout);
	k = lenout - 1, i = len1 - 1, j = len2 - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
			i = len1 - 1, j--, addl = 0, ca++, k = lenout - (1 + ca);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
				break;
			lenout--;
			free(nout), nout = malloc(lenout + 1), nout = _initialize_array(nout, lenout);
			k = lenout - 1, i = len1 - 1, j = len2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}

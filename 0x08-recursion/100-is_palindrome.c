#include "main.h"

/**
 * _strlen - checks the length of string
 * @s: input string
 * Return:  length of string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * checker - checks for similarity in string
 * @s: input string
 * @left: counter from left side of string.
 * @right: counter from right side of string.
 * Return: .
 */
int checker(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + checker(s, left + 1, right - 1));
	}
	return (0);
}

/**
 * is_palindrome - tells whether the string is palindrome or not.
 * @s: input string
 * Return: 1 when its a palindrome, 0 when not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (checker(s, 0, _strlen(s) - 1));
}

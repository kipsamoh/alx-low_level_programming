#include "main.h"

/**
 * _isdigit - checks if its a digit from 0-9.
 * @c: input char as digit
 * Return: 1 if its a digit (0 to 9), 0 when its not.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

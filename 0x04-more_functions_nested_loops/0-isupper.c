#include "main.h"

/**
 * _isupper - determines if uppercase
 * @c: character to check
 * Return: 1 when uppercase and 0 when its other case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

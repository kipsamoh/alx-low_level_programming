#include "main.h"
/**
 * string_toupper - modifies lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: dest pointer.
 */

char *string_toupper(char *s)
{
	int sum = 0;

	while (*(s + sum) != '\0')
	{
		if ((*(s + sum) >= 97) && (*(s + sum) <= 122))
			*(s + sum) = *(s + sum) - 32;
		sum++;
	}

	return (s);
}

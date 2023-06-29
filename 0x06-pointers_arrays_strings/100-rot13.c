#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes rot13
 * @s: string pointer
 *
 * Return: string *s
 */

char *rot13(char *s)
{
	int a;
	int b;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == alphabet[b])
			{
				s[a] = rot13[b];
				break;
			}
		}
	}
	return (s);
}


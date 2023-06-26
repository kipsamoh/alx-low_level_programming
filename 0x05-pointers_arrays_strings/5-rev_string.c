#include "main.h"

/**
 * rev_string - outputs a reversed string
 * @s:  string input
 * Return: reversed string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int a;

	while (s[count] != '\0')
	count++;
	for (a = 0; a < count; a++)
	{
		count--;
		rev = s[a];
		s[a] = s[count];
		s[count] = rev;
	}
}


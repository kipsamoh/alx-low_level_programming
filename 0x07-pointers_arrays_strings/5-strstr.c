#include "main.h"
/**
 * _strstr - locates substring.
 * @haystack: string1 input
 * @needle: string2 input
 * Return: pointer to start of located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (0);
}


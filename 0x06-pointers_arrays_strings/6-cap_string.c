#include "main.h"
/**
 * cap_string - changes all strings into uppercase
 * @s: string input
 * Return: dest pointer.
 */

char *cap_string(char *s)
{
	int sum = 0, a;
	int words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + sum) >= 97 && *(s + sum) <= 122)
		*(s + sum) = *(s + sum) - 32;
	sum++;
	while (*(s + sum) != '\0')
	{
		for (a = 0; a < 13; a++)
		{
			if (*(s + sum) == words[a])
			{
				if ((*(s + (sum + 1)) >= 97) && (*(s + (sum + 1)) <= 122))
					*(s + (sum + 1)) = *(s + (sum + 1)) - 32;
				break;
			}
		}
		sum++;
	}
	return (s);
}

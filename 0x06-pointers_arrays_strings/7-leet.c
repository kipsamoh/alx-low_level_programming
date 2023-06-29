#include "main.h"
/**
 * leet - changes string to 1337
 * @s: string.
 * Return: dest.
 */

char *leet(char *s)
{
	int sum = 0, a;
	int small[] = {97, 101, 111, 116, 108};
	int capital[] = {65, 69, 79, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};

	while (*(s + sum) != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (*(s + sum) == small[a] || *(s + sum) == capital[a])
			{
				*(s + sum) = nums[a];
				break;
			}
		}
		sum++;
	}

	return (s);
}

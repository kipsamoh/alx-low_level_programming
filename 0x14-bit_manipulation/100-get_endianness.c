#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int y;
	char *a;

	y = 1;
	a = (char *) &y;

	return ((int)*a);
}

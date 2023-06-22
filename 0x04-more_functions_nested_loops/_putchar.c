#include "main.h"
#include <unistd.h>

/**
 * _putchar - ouputs c to stdout
 * @c: the character to output
 *
 * Return: 1 is successful
 * On error, -1 means error, and errno is set out.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

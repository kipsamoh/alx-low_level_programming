#include <stdio.h>

/**
 * beforemain - function prints before entry point
 * Return: no return.
 */

void __attribute__ ((constructor)) beforemain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

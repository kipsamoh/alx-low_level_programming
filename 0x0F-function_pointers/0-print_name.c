#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - output name using ptr to function.
 * @name: name pointer input
 * @f: function pointer.
 * Return:void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

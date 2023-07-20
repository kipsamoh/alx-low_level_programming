#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - ouputs anything.
 * @format: arguments type list that may be passed.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	char *string;
	va_list types;
	unsigned int a = 0, b, c = 0;
	const char stringarray[] = "cifs";

	va_start(types, format);
	while (format && format[a])
	{
		b = 0;
		while (stringarray[b])
		{
			if (format[a] == stringarray[b] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(types, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(types, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(types, double)), c = 1;
			break;
		case 's':
			string = va_arg(types, char *), c = 1;
			if (!string)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
			break;
		} a++;
	}
	printf("\n"), va_end(types);
}

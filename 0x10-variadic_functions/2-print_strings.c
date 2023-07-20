#include "variadic_functions.h"

/**
 * print_strings - outputs strings.
 * @separator: string to separate strings
 * @n: number of strings.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *ptr;
	unsigned int a;

	va_start(strings, n);

	for (a = 0; a < n; a++)
	{
		ptr = va_arg(strings, char *);

		if (ptr)
			printf("%s", ptr);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}

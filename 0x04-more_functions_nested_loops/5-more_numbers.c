#include "main.h"

/**
 * print_line -outputs straight line on terminal
 * @n: number of times the char _ printed
 */
void print_line(int n)
{
 if (n <= 0)
 {
 _putchar('\n');
 } else
 {
 int a;

 for (a = 1; a <= n; a++)
 {
 _putchar('_');
 }
 _putchar('\n');
 }

}


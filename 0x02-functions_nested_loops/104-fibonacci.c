#include <stdio.h>

/**
 * main - outputs the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, boolean, boolean2;
	long int b1, b2, db, db2, b11, b22;

	b1 = 1;
	b2 = 2;
	boolean =  boolean2 = 1;
	printf("%ld, %ld", b1, b2);
	for (a = 0; a < 96; a++)
	{
		if (boolean)
		{
			db = b1 + b2;
			printf(", %ld", db);
			b1 = b2;
			b2 = db;
		}
		else
		{
			if (boolean2)
			{
				b11 = b1 % 1000000000;
				b22 = b2 % 1000000000;
				b1 = b1 / 1000000000;
				b2 = b2 / 1000000000;
				boolean2 = 0;
			}
			db2 = (b11 + b22);
			db = b1 + b2 + (db2 / 1000000000);
			printf(", %ld", db);
			printf("%ld", db2 % 1000000000);
			b1 = b2;
			b11 = b22;
			b2 = db;
			b22 = (db2 % 1000000000);
		}
		if (((b1 + b2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}

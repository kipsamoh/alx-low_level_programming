#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - outputs the sum of
 * diagonals in a square matrix of integers
 * @a: pointer input
 * @size: matrix size
 * Return: none.
 */
void print_diagsums(int *a, int size)
{
	int z;
	int sum1 = 0;
	int sum2 = 0;

	for (z = 0; z < (size * size); z++)
	{
		if (z % (size + 1) == 0)
			sum1 += *(a + z);
		if (z % (size - 1) == 0 && z != 0 && z < size * size - 1)
			sum2 += *(a + z);
	}
	printf("%d, %d\n", sum1, sum2);
}

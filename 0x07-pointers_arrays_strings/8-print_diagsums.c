#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function prints the sum of 
 * the two diagonals of any square matrix.
 * @a: pointer to the first element of the matrix.
 * @size: the size of the matrix
 * return: returns void.
 */

void print_diagsums(int *a, int size)
{
	int j, sum1 = 0, sum2 = 0;

	for (j = 0; j < (size * size); j++)
	{
		if (j % (size + 1) == 0)
			sum1 += a[j];
		if (j % (size - 1) == 0 && j != 0 && j < size * size - 1)
			sum2 += a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}

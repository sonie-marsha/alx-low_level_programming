#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints diagonal sums of a square matrix
 *@a: ptr to matrix
 *@size: no of rows and columns
 *
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int row, col;

	for (row = 0; i < size; row++)
	{
		sum1 += a[row * size + row];
		sum2 += a[row * size + (size -1 - row)];
	}

	printf("%d, %d\n", sum1, sum2);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: matrix of integers
 *
 * @size: size of a
 */

void print_diagsums(int *a, int size)
{
	int i, j, k = 0, sum1 = 0, sum2 = 0;
	int **twodim_a = (int **)malloc(size * sizeof(int *));

	for (i = 0; i < size; i++)
	{
		twodim_a[i] = (int *)malloc(size * sizeof(int));
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			twodim_a[i][j] = a[k++];
		}
	}

	for (i = 0; i < size; i++)
	{
		free(twodim_a[i]);
	}
	free(twodim_a);

	for (i = 0, j = 0; i < size && j < size; i++, j++)
	{
		sum1 += twodim_a[i][j];
	}

	for (i = 0, j = size - 1; i < size && j >= 0; i++, j--)
	{
		sum2 += twodim_a[i][j];
	}

	printf("%d, %d\n", sum1, sum2);
}

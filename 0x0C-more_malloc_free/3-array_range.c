#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: min number
 *
 * @max: max number
 *
 * Return: a
 */

int *array_range(int min, int max)
{
	int i, j = min, len = (max - min) + 1, *a;

	if (min > max)
		return (NULL);

	a = (int *)malloc(sizeof(int) * len);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		a[i] = j;
		j++;
	}

	return (a);
}

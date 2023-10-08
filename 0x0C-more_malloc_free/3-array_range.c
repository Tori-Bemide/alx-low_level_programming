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
	int i, j, len, *a;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		len++;

	a = (int *)malloc(sizeof(int) * len);
	
	if (a == NULL)
		return (NULL);
	
	for (i = 0, j = min; j <= max; i++, j++)
		a[i] = j;

	return (a);
}

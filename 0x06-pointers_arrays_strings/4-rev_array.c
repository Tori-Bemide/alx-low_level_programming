#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array
 *
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int j, temp;

	for (j = 0; j <= (n - 1) / 2; j++)
	{
		temp = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = temp;
	}
}

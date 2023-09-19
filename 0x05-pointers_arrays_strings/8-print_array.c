#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 *
 * @a: array
 *
 * @n: numbr of elments
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d", a[i]);
	}
	_putchar('\n');
}

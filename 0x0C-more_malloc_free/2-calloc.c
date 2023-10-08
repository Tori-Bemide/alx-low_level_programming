#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb:  number of elements
 *
 * @size: size in bytes
 *
 * Return: a
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = (int *)malloc((nmemb * size) + 1);

	for (i = 0; i < size; i++)
		a[i] = 0;

	a[i] = '\0';

	return (a);
}

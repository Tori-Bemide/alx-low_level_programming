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
	void *a;
	char *char_a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc((nmemb * size) + 1);

	if (a == NULL)
		return (NULL);

	char_a = (char *)a;

	for (i = 0; i < (nmemb * size); i++)
	{
		char_a[i] = 0;
	}

	char_a[i] = '\0';

	return (a);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 *
 * @size: size of array
 *
 * @c: character
 *
 * Return: a
 */

char *create_array(unsigned int size, char c)
{
	char *a = (char *)malloc(sizeof(c) * size);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}

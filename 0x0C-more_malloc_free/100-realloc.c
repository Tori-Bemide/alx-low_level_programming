#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to memory
 *
 * @old_size: old size of memory
 *
 * @new_size: new size of memory
 *
 * Return: a
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	a = malloc(new_size);

	if (!a)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		((char *)a)[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (a);
}

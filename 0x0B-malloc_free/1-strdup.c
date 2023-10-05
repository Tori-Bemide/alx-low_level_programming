#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string
 * given as a parameter
 *
 * @str : string to be copied
 *
 * Return: a
 */

char *_strdup(char *str)
{
	char *a = (char *)malloc(sizeof(str));
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		a[i] = str[i];
	}

	return (a);
}

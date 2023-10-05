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
	char *a;
	int i, length = 0;

	while (str[length] != '\0')
		length++;

	a = (char *)malloc((sizeof(char) * length) + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		a[i] = str[i];
	}

	a[i] = '\0';

	if (a == NULL)
		return (NULL);

	return (a);
}

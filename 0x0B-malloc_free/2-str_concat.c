#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: a
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;
	char *a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	a = (char *)malloc((sizeof(char) * (len1 + len2)) + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		a[i + j] = s2[j];
	}

	a[i + j] = '\0';

	return (a);
}

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: first n bytes from s2
 *
 * Return: a
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (len2 < n)
		n = len2;

	a = (char *)malloc(sizeof(char) * (len1 + n + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		a[i] = s1[i];

	for (i = 0; i < n; i++)
		a[len1 + i] = s2[i];

	a[len1 + i] = '\0';
	return (a);
}

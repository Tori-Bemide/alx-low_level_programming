#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: first string
 *
 * @needle: second string
 *
 * Return: pointer to needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
			return (&haystack[i]);
	}

	return ('\0');
}

#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: first string
 *
 * @accept: second string
 *
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;
	int found;

	while (*s)
	{
		*a = accept;
		found = 0;

		while (*a)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (!found)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}

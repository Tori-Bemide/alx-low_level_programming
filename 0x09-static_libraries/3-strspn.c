#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: first string
 *
 * @accept: second string
 *
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;
	unsigned int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length += 1;
				count = 1;
			}
		}

		if (count != 1)
		break;
	}

	return (length);
}

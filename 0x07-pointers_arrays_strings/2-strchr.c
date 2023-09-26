#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 *
 * @c: character
 *
 * Return: &s[i]
 */

char *_strchr(char *s, char c)
{
	int i;
	char *np = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (np);
}

#include "main.h"
/**
 * leet - encodes a string into 1337
 *
 * @a: string
 *
 * Return: a
 */

char *leet(char *a)
{
	char *b = a;
	int i;

	while (*b)
	{
		char *a_chars = "AaEeOoTtLl";
		char *a_replacements = "4433007711";

		for (i = 0; a_chars[i]; i++)
		{
			if (*b == a_chars[i])
			{
				*b = a_replacements[i];
				break;
			}
		}

		b++;
	}

	return (a);
}

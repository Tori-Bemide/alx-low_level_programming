#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: string to be checked
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length += 1;
	}

	return (length);
}


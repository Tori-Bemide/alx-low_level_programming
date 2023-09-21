#include "main.h"
/**
 * _strncat - function is similar to the _strcat function
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: most bytes from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len += 1;

	for (j = 0; j < n; j++)
		if (j > 0)
			dest[len + j] = src[j];

	return (dest);
}

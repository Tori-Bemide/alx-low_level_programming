#include "main.h"
/**
 * _strncpy - copies a string
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: no of bytes to be copies from src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

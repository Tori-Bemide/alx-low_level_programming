#include "main.h"
/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end
 * of dest, and then adds a terminating null byte
 *
 * @dest: first string
 *
 * @src: second string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len += 1;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len + j] = src[j];
	}

	return (dest);
}

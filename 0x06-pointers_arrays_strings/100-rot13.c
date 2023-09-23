#include "main.h"
/**
 * rot13 - encodes a string using rot13
 *
 * @a: string to be encoded
 *
 * Return: a
 */

char *rot13(char *a)
{
	int i;

	for (i = 0; a[i]; i++)
	{
		if ((a[i] >= 65 && a[i] < 78) || (a[i] >= 97 && a[i] < 110))
		{
			a[i] = a[i] + 13;
		}

		else if ((a[i] >= 78 && a[i] < 91) || (a[i] >= 110 && a[i] < 123))
			a[i] = a[i] - 13;
	}
	return (a);
}

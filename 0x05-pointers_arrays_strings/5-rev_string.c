#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, j, k = 0, length = 0;

	for (i = 0; s[i] != 0; i++)
	{
		length += 1;
	}
	for (j = 0; j < (length + 1) / 2; j++)
	{
		k = s[j];
		s[j] = s[length - j - 1];
		s[length - j - 1] = k;
	}
}

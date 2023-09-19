#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, j, length = 0, check;

	for (i = 0; str[i] != '\0'; i++)
	{
		length += 1;
	}

	check = length + 1;

	for (j = check / 2; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}


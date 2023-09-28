#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 *
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	putchar(*s);
	s++;

	_puts_recursion(s);
}

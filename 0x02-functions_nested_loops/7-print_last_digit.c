#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: c (Success)
 *
 * @c: number to be checked
 */
int print_last_digit(int c)
{
	int d;

	if (c <  0)
		c *= -1;
	d = c % 10;
	_putchar(48 + d);
	return (d);
}


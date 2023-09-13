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

	d = c % 10;

	if (d <  0)
		d *= -1;
	_putchar(48 + d);
	return (d);
}


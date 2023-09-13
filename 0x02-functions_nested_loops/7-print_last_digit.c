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
	if (c <  0)
		c = -c;

	int d = c % 10;

	return (d);
}


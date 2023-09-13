#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * Return: Always 0 (Success)
 * @c: number to be checked
 */
int _abs(int c)
{
	int d, e, f;

	c = 98;
	if (c < 0)
	{
		d = -c;
	}
	else
		d = c;

	e = d / 10;
	f = d % 10;

	if (d > 9)
	{
		_putchar(48 + e);
	}
	_putchar(48 + f);
	_putchar('\n);
	return 0;
}

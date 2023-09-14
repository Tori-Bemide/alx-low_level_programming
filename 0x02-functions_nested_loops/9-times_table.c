#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int i, j, mul;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (j = 1; j < 10; j++)
		{
			mul = i * j;
			_putchar(',');
			_putchar(' ');
			if (mul < 10)
			{
				_putchar(' ');
			}
			if (mul > 9)
			{
				_putchar(48 + (mul / 10));
			}
			_putchar(48 + (mul % 10));
		}
		_putchar('\n');
	}
}

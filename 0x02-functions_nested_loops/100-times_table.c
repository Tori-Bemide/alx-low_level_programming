#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number
 */
void print_times_table(int n)
{
	if (n <= 15 || n <= 0)
	{
		int i, j, mul;

		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				mul = i * j;

				putchar(',');
				putchar(' ');
				if (mul < 100)
				{
					putchar(' ');
				}
				if (mul < 10)
				{
					putchar(' ');
				}
				if (mul > 99)
				{
					putchar(48 + (mul / 100));
					putchar(48 + ((mul - 100) / 10));
				}
				if (mul > 9 && mul <= 99)
				{
					putchar(48 + (mul / 10));
				}
				putchar(48 + (mul % 10));
			}
			putchar('\n');
		}
	}
}

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
		putchar(48);
		for (j = 1; j < 10; j++)
		{
			mul = i * j;
			putchar(',');
			putchar(' ');
			if (mul < 10)
			{
				putchar(' ');
			}
			if (mul > 9)
			{
				putchar(48 + (mul / 10));
			}
			putchar(48 + (mul % 10));
		}
		putchar('\n');
	}
}

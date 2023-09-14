#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack
 * Bauer, starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i <= 9)
			{
				_putchar(48);
			}
			else
			{
				_putchar(48 + (i / 10));
			}
			_putchar(48 + (i % 10));
			_putchar(':');
			if (j <= 9)
			{
				_putchar(48);
			}
			else
			{
				_putchar(48 + (j / 10));
			}
			_putchar(48 + (j % 10));
			_putchar('\n');
		}
	}
}

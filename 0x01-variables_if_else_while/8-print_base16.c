#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	while (i < 16)
	{
		putchar(87 + i);
		i++;
	}
	putchar('\n');
	return (0);
}

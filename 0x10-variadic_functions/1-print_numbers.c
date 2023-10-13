#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: seperates printed numbers
 *
 * @n: no of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if ((i < (n - 1)) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}

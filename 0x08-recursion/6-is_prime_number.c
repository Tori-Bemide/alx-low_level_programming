#include "main.h"

/**
 * is_divisible - checks whether the number is divisible
 *
 * @n: inputted number
 *
 * @divisor: second number
 *
 * Return: recursive function
 */

int is_divisible(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (0);
	}

	if (n % divisor == 0)
	{
		return (1);
	}

	return (is_divisible(n, divisor + 1));
}

/**
 * is_prime_number - checks for prime number
 *
 * @n: number to be checked
 *
 * Return: recursive function
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (!is_divisible(n, 2));
}

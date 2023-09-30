#include "main.h"

/**
 * _sqrt_helper - helps to find the square root
 *
 * @n: number
 *
 * @guess: guess number
 *
 * Return: guess
 */

int _sqrt_helper(int n, int guess)
{
	if (n < 0)
		return (-1);

	if (guess * guess <= n && (guess + 1) * (guess + 1) > n)
		return (guess);

	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square of
 * a number
 *
 * @n: number
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}

#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long long n = 612852475143, prime = 0, i;

	while (n % 2 == 0)
	{
		prime = 2;
		n /= 2;
	}

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			prime = i;
			n /= i;
		}
	}
	return (0);
}

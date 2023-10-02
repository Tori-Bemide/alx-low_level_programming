#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 *
 * @argv: arument vector
 *
 * Return: 0 or 1
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 1, sum = 1;

	if (argv[1] != NULL && argv[2] != NULL)
	{
		for (; i < 3; i++)
		{
			sum *= atoi(argv[i]);
		}

		printf("%d\n", sum);
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}

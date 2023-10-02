#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i = 1, j, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

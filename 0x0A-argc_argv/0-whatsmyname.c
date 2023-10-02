#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 *
 * @argc: unused variable
 *
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}

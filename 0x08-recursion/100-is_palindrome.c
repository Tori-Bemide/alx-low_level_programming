#include "main.h"

/**
 * _strlen_recursion - returns th length of a string
 *
 * @s: string
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_recursive - checks for palindrome
 *
 * @s: string
 *
 * @start: start of string
 *
 * @end: end of string
 *
 * Return: recursive function
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks palindrome
 *
 * @s: string
 *
 * Return: recursive function
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}


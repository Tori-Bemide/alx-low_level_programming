#include "main.h"
/**
 * _isalpha -  checks for alpahabetic character
 *
 * Return: 1 or 0 (Success)
 *
 * @c: parameter to be checked
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
		return (0);
}

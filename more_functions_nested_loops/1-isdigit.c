#include "main.h"
/**
 * _isdigit - Returns a value depending on if c is a digit or not
 *
 * @c: a character
 *
 * Return: 1 if a digit, 0 if not a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

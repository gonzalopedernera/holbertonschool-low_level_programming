#include "main.h"
/**
 * _strlen_recursion - calculates the length of a string recursively
 *
 * @s: string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion i(s + 1) + 1);
	}
	return (0);
}

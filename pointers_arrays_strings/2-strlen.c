#include "main.h"
/**
 * _strlen - calculates the length of a string
 *
 * @s: a string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		++i;
	}

	_putchar(i);
	return (i);
}


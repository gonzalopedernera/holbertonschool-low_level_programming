#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 *
 * @s: a string
 */
void print_rev(char *s)
{
	int i;
	int l = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++
	}

	for (i = (l - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}


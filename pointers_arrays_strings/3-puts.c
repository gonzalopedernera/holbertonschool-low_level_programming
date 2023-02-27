#include "main.h"
/**
 * _puts - prints a string followed by a new line
 *
 * @str: a string
 */
void _puts(char *str)
{
	int i;

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}


#include "main.h"
#include <string.h>
/**
 * _puts - prints a string followed by a new line
 *
 * @str: a string
 */
void _puts(char *str)
{
	int i;
	int l = strlen(str);

	for (i = (l - 1); i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string followed by a new line
 *
 * @str: a string
 */

void puts_half(char *str)
{
	int i;
	int l = strlen(str);
	int n = l / 2;

	for (i = n; i < l; i++)
	{
		if ((l % 2) == 0)
		{
		n++;
		}
	_putchar(str[i]);
	}
	_putchar('\n');
}

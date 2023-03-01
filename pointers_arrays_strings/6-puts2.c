#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string
 *
 * @str: a string
 */
void puts2(char *str)
{
	int i;
	int l = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
		_putchar(str[i]);
		}
		l++;
	}
	_putchar('\n');
}


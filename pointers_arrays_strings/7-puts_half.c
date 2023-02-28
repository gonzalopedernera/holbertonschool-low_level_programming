#include "main.h"
#include <string.h>

void puts_half(char *str)
{
	int i;
	int l = _strlen(str);
	int n = (l -1) / 2;

	for (i = n; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

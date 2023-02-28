#include "main.h"
#include <string.h>

void puts_half(char *str)
{
	int i;
	int l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (i >= 5)
		{
			_putchar(str[i]);
		}
	}
		_putchar('\n');
}


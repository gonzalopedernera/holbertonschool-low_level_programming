#include "main.h"
#include <string.h>

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		
		if(i < n)
		{
		_putchar(44);
		_putchar(32);
		}
	}
	_putchar('\n');
}

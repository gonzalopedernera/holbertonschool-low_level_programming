#include "main.h"

void print_triangle(int size)
{
	int i;
	int j;
	int sizes = size;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j < size; j++)
		{
		if (j >= sizes)
		{
			_putchar(35);
		}
		else
		{
			_putchar(' ');
		}
		sizes--;
		_putchar('\n');
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

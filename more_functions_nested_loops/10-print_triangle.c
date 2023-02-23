#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i;
	int j;
	int sizes = size;

	if (size <= 0)
		_putchar('\n');
	else
	{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
		if (j >= sizes - 1)
		{
			_putchar(35);
		}
		else
		{
			_putchar(32);
		}
		}
		sizes--;

		_putchar('\n');
	}
	}

}

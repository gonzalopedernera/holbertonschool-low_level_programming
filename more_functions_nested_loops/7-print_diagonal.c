#include "main.h"
/**
 * print_diagonal - prints '\' a number of times equal to n
 *
 * @n: a number
 */
void print_diagonal(int n)
{
	int i;

	if (n >= 0)
	{
	for (i = 0; i < n; i++)
	{
		_putchar(127);
	}
		_putchar(92);
	}
		_putchar('\n');
}


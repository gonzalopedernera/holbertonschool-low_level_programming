#include "main.h"
/**
 * print_line - prints '_' a number of times equal to n
 *
 * @n: a number
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
		_putchar('\n');
	if (n <= 0)
		_putchar('\n');
}


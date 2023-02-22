#include "main.h"
/**
 * print_line - prints '_' a number of times equal to n
 *
 * @n: a number
 */
void print_line(int n)
{
if (n > 0)
{
	_putchar(('_' * n) + '0');
	_putchar('\n');
}
if (n <= 0)
	_putchar('\n');
}


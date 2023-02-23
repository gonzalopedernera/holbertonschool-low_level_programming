#include "main.h"
/**
 * print_diagonal - prints '\' a number of times equal to n
 *
 * @n: a number
 */
void print_diagonal(int n)
{
int i;
int j;

for (i = 1; i <= n; i++)
{
for (j = 1; j < i; j++)
{
	_putchar(127);
}
j = 1;
if (n >= 1)
{
	_putchar(92);
}
	_putchar('\n');
}
if (n <= 0)
{
	_putchar('\n');
}
}


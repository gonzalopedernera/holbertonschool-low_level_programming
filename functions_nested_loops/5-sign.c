#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * @n: a number
 *
 * Return: 1 if positive, -1 if negative, 0 if 0
 */

int print_sign(int n)
{
if (n < 0)
{
printf("-");
return (-1);
}
else if (n > 0)
{
return (1);
putchar('+');
}
else
{
return (0);
putchar('0');
}
}

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
write(1, "-", 1);
return (-1);
}
else if (n > 0)
{
write(1, "+", 1);
return (1);
}
else
{
write(1, "0", 1);
return (0);
}
}

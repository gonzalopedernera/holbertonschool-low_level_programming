#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @num: a number
 *
 * Return: last digit
 */

int print_last_digit(int num)
{
int ld;

ld = num % 10;

if (ld < 0)
{
ld = (ld * -1);
}

_putchar(ld + '0');
return (ld);
}

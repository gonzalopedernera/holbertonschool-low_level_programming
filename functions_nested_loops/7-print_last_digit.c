#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @num: a number
 *
 * @lastDigit: the last digit of num
 *
 * return: last digit
 */

int print_last_digit(int num)
{
int lastdig;
int lastdigneg;

lastdig = num % 10;
lastdigneg = lastdig * -1;

if(lastdig >= 0)
{
printf("%d", lastdig);
printf("\n");
}
else
{
printf("%d", lastdigneg);
printf("\n");
}

return (0);
}

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
int lastDigit;

lastDigit = num % 10;

if(lastDigit >= 0)
printf("%d", lastDigit);

return (lastDigit);
}

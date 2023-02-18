#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @num: a number
 *
 * @lastdig: the last digit of num
 *
 * return: last digit
 */

int print_last_digit(int num)
{
 int lastdig;

 lastdig = num % 10;

 if(lastdig < 0)
  {
    lastdig = (lastdig * -1);
  }

 putchar(lastdig + '0');
 return (lastdig);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastDigit=n % 10;

srand(time(0));
n = rand() - RAND_MAX / 2;

if(lastDigit > 5)
printf("Last digit of %d is %d and is greater than 5\n", lastDigit,n);
if(lastDigit == 0)
printf("Last digit of %d is %d and is 0\n", lastDigit,n);
if(lastDigit < 6 && lastDigit != 0)
printf("Last digit of %d is %d and id less than 6 and not 0\n", lastDigit,n);
return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
char c[] = {95, 112, 117, 116, 99, 104, 97, 114};
int i;

for (i = 0; i <8; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return(0);
}

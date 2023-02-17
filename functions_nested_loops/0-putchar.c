#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * _putchar @c: char
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)

{
putchar('_');
putchar('p');
putchar('u');
putchar('t');
putchar('c');
putchar('h');
putchar('a');
putchar('r');
putchar('\n');
return (write(1, &c, 1));
}





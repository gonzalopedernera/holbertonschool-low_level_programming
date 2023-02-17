#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabet.
 */

void print_alphabet(void) 

{
char ch;

for (ch = 97; ch <= 122; ch++)
putchar(ch);

putchar('\n');
}

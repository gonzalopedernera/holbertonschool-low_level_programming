#include "main.h"
/**
 * jack_bauer - prints every minute of a day
 *
 * hour - hours of a day
 *
 * min - minutes of a day
 */

void jack_bauer(void)
{
int hour;
int min;


for(hour = 0; hour < 24; hour++)
{
for(min = 0; min < 60; min ++)
{
putchar(hour);
putchar(':');
putchar(min);
putchar('\n');
}
}
}

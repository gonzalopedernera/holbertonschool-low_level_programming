#include "main.h"
/**
 * more_numbers - prints all numbers from 0 to 14 ten times
 */
void more_numbers(void)
{
	int i;

	int num;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}


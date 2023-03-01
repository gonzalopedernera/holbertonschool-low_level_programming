#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: string
 *
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int l = 0;

	for (n = 0; a[n] != '\0'; n++)
	{
		l++;
	}

	for (n = (l - 1); n >= 0; n--)
	{
		_putchar(a[n]);
	}
}

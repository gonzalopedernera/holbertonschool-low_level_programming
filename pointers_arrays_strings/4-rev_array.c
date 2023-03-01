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
	int p;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		p = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = p;
	}
}

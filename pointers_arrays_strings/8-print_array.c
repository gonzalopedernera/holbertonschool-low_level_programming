#include "main.h"
#include <string.h>
/**
 * print_array - prints a n number of elements of the array
 *
 * @a: an array
 *
 * @n: number of integers of the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
		printf(", ");
		}
	}
	printf("\n");
}

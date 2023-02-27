#include "main.h"
/**
 * swap_int - swaps the values of a and b
 *
 * @a: a pointer
 *
 * @b: a pointer
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	int pp = *b;

	*a = pp;
	*b = p;

}


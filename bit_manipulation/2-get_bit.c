#include "main.h"
#include <stddef.h>
/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: the number
 *
 * @index: position where to find the bit
 *
 * Return: the bit, or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (n == '\0')
	{
		return (-1);
	}
	bit = (n >> index) & 1;

	return (bit);
}

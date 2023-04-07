#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: a number
 *
 * @index: bit position where to change value
 *
 * Return: 1 if success, -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1 << index;

	if (!n || index > (sizeof(unsigned long int) * 8) - 1)
	{
		return (-1);
	}
	*n &= ~(mask);

	return (1);
}

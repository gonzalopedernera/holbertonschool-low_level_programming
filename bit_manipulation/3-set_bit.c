#include "main.h"
#include <stddef.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: the number
 *
 * @index: bit position to change
 *
 * Return: 1 if it worked, -1 if it failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > (sizeof(unsigned long int) * 8) - 1)
	{
		return (-1);
	}
	*n |= 1 << index;
	return (1);
}

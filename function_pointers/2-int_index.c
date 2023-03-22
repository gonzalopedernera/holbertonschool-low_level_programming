#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer and compare them
 *
 * @array: an array
 *
 * @size: size of the array
 *
 * @cmp: function to use
 *
 * Return: -1 if fail, index of the first element that cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*cmp)(array[i]);
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}

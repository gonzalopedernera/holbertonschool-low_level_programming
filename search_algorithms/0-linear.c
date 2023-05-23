#include "search_algos.h"
/**
 * linear_search - searches for a value in an array using Linear search algor
 *
 * @array: an array of integers.
 *
 * @size: size of the array.
 *
 * @value: value to search for
 *
 * Return: index where value is found or -1 if no array or no value in array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}


#include "search_algos.h"
/**
 * binary_search - searches for a value in an array using Binary search algor
 *
 * @array: a sorted array of integers
 *
 * @size: size of array
 *
 * @value: value to find in array
 *
 * Return: index where value is found, or -1 if no array or value not in array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lowest = 0, highest = 0, mid = 0;

	if (array == NULL)
	{
		return (-1);
	}

	highest = size - 1;
	while (lowest < highest)
	{
		mid = (lowest + highest) / 2;
		print_array(array, lowest, highest);
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (value > array[mid])
		{
			lowest = mid + 1;
		}
		else
		{
			highest = mid - 1;
		}
	}
	return (-1);
}
/**
 * print_array - auxiliar function for binary search printing
 *
 * @array: a sorted array of integers
 *
 * @lowest: lowest position of the specified portion of array
 *
 * @array: a sorted array of integers
 *
 * @lowest: lowest position of the specified portion of array
 *
 * @highest: higest position of the specified portion of the array
 */
void print_array(int *array, size_t lowest, size_t highest)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = lowest; i <= highest; i++)
	{
		printf("%d", array[i]);
		if (i < highest)
		{
			printf(", ");
		}
	}
	printf("\n");
}

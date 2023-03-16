#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array with values ranging from min to max
 *
 * @min: min value of array
 *
 * @max: max value of array
 *
 * Return: pointer to array, or NULL if fail
 */
int *array_range(int min, int max)
{
	int *s;
	int i, j = 0;

	if (min > max)
	{
		return (NULL);
	}

	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		s[j] = i;
		j++;
	}
	return (s);
}

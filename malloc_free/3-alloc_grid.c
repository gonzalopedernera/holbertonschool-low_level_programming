#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int
 *
 * @width: width of the string
 *
 * @height: height of the string
 *
 * Return: pointer to array or NULL if fail
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **ar;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(int *) * height);

	if (ar == NULL)
	{
		return (NULL);
	}

	for (; j < height; j++)
	{
		ar[j] = malloc(sizeof(int) * width);
		if (ar[j] == NULL)
		{
			for (; i < j; i++)
			{
				free(ar[i]);
			}
			free(ar);
			return (NULL);
		}
	}

	for (j = 0; i < height; j++)
	{
		for (i = 0; i < width; i++)
		{
			ar[j][i] = 0;
		}
	}
	return (ar);
}

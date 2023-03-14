#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array initialized with a specific  char
 *
 * @size: size of the array
 *
 * @c: char to initialize the array with
 *
 * Return: the array, or null in case of fail
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; s[i] == '\0';)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

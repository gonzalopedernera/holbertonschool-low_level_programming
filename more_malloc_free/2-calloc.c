#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates nmemb amount of memory using malloc
 *
 * @nmemb: max amount of memory to be allocated
 *
 * @size: size of var
 *
 * Return: pointer to allocated memory, or NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	size *= nmemb;

	s = malloc(size);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = 0;
	}

	return (s);
}

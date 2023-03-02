#include "main.h"
/**
 * _memset - fills the memory with a constant byte
 *
 * @s: points to a array
 *
 * @b: constant byte
 *
 * @n: location to be filled
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}


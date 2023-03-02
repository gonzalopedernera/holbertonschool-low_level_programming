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

	for (i = 0; s[i] != '\0'; i++)
	{
		s[n] = b;
	}

	return (s);
}


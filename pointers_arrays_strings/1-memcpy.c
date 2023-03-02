#include "main.h"
/**
 * _memcpy - copies a n amount of bytes from src to dest
 *
 * @dest: destiny of the copy
 *
 * @src: source of the copy
 *
 * @n: number of bytes to be copied
 *
 * Return: the copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	unsigned int j;

	for (i = 0; src[i] != '\0'; i++)
	{
		j++;
	}

	for (j = 0; j < n; j++)
	{
		dest[j] = src[n];
	}
	for (; i < n;)
	{
	dest[i] = '\0';
	}
	return (dest);
}

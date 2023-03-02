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
	unsigned int j;

	for (j = 0; j <= n - 1; j++)
	{
		dest[j] = src[n];
	}
	dest[j] = '\0';
	return (dest);
}

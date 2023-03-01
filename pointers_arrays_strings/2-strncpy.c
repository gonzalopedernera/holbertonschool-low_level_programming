#include "main.h"
/**
 * _strncpy - the same function as strncpy from the standard library
 *
 * @dest: destination of the copy
 *
 * @src: source of the copy
 *
 * @n: number of bytes to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}

	return (dest);
}

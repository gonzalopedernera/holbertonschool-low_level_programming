#include "main.h"
/**
 * _strncat - concatates two strings using an n bytes of src
 *
 * @dest: destination of the concatation
 *
 * @src: source of the concatation
 *
 * @n: the amount of bytes to be used from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	for (i = 0; dest[i];)
	{
		i++;
	}

	j = 0;

	for (j = 0; i < n && src[j] != '\0';)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}


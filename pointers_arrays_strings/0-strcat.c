#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: string and destination of the concatenation.
 *
 * @src: string and source of the concatenation
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	for (i = 0; dest[i];)
	{
		i++;
	}

	j = 0;

	for (j = 0; src[j];)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';


	return (dest);
}


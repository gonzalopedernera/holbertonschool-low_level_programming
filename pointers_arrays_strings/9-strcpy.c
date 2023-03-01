#include "main.h"
#include <string.h>
/**
 * _strcpy - copies a string
 *
 * @dest: destination of the copy
 *
 * @src: source of the copy
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;


	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

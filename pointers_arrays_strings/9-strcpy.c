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
	int l = 0;

	for (i = 0; src[i] <= '\0'; i++)
	{
		l++;
		dest[i] = src[i];
	}

	return (dest);
}

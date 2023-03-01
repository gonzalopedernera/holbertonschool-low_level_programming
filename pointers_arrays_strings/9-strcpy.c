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
	int l = _strlen(src);

	for (i = 0; i < l; i++)
		dest[i] = src[i];

	return (dest);
}

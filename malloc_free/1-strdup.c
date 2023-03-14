#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - allocates a copy of str in the memory
 *
 * @str: string to be copied
 *
 * Return: copy of str, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *strn;

	if (str == NULL)
	{
		return (NULL);
	}

	strn = malloc(sizeof(char) * strlen(str) + 1);
	if (strn == NULL)
	{
		return (NULL);
	}

	strcpy(strn, str);

	return (strn);
}

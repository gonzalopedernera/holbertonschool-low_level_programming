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
	int i;

	if (str[0] == '\0')
	{
		return (NULL);
	}

	for (i = 0; str[i] == '\0';)
	{
		str++;
		i++;
	}

	strn = malloc(sizeof(char) * i);

	strcpy(strn, str);
	return (strn);
}

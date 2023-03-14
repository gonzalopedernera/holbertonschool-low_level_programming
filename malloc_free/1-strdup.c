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
	int j;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}
	strn = malloc(sizeof(char) * (i + 1));
	if (strn == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		strn[j] = str[j];
	}
	return (strn);
}

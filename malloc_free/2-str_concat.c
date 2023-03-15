#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings contained in a new string
 *
 * @s1: pointer 1
 *
 * @s2: pointer 2
 *
 * Return: concatenated pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int j;
	int k;
	int l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0';)
	{
		i++;
	}

	for (j = 0; s2[j] != '\0';)
	{
		j++;
	}

	str = malloc(sizeof(char) * ((i + 1) + (j + 1)));

	if (str == NULL)
	{
		return (NULL);
	}

	for (k = 0; k <= i;)
	{
		str[k] = s1[k];
		k++;
	}

	for (l = 0; l <= ((i + 1) + (j + 1)))
	{
		str
	}
	strcat(str, s2);

	return (str);
}

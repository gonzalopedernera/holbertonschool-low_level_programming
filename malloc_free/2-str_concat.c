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

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	str = malloc(sizeof(char) * (strlen(s2) + strlen(s1)) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	strcpy(str, s1);
	strcat(str, s2);

	return (str);
}

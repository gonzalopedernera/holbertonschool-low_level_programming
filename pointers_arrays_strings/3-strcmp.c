#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: 0 if equal, positive if s1 > s2, negative if s1 < s2)
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int r;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0';)
	{
	if (s1[i] == s2[i])
	{
		r = 0;
	}

	if (s1[i] > s2[i])
	{
		r = 1;
	}

	if (s1[i] < s2[i])
	{
		r = -1;
	}
	i++;
	}
	return (r);
}


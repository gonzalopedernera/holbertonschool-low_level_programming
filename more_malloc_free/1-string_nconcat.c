#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings containing n bytes of s2
 *
 * @s1: pointer 1
 *
 * @s2: pointer 2
 *
 * @n: bytes to copy from s2
 *
 * Return: concatenated pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j = 0, k, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0';)
	{
		i++;
	}

	for (j = 0; s2[j] != '\0';)
	{
		j++;
	}
	if (n >= j)
		n = j;

	str = malloc(sizeof(char) * (i + n) + 1);

	if (str == NULL)
		return (NULL);

	for (k = 0; k < (i + n);)
	{
		if (k < i)
			str[k] = s1[k];

		else
		{
			str[k] = s2[l];
			l++;
		}
		k++;
	}
	str[k] = '\0';
	return (str);
}

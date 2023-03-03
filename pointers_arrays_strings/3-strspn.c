#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string where inital segment is taken from
 *
 * @accept: string to compare to
 *
 * Return: number of bytes in common
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j = 0;
	int k = 0;

	for (i = 0; s[i] != '\0' && accept[j] != '\0'; i++)
	{
		if (s[i] == accept[j])
		{
			k++;
		}
		if (s[i] != accept[j])
		{
			break;
		}
		j++;
	}
	return (k);
}


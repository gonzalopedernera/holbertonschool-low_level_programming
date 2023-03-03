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
	int j;
	int k = 0;

	for (j = 0; accept[j]; j++)
	{
		for (i = 0; s[i]; i++)
		{
			if (s[i] == ' ')
			{
				break;
			}
			if (s[i] == accept[j])
			{
				k++;
			}
		}
	}
	return (k);
}


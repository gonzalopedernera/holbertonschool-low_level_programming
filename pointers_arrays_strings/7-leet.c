#include "main.h"
/**
 * leet - write a function that encodes a string into 1337
 *
 * @p: a string
 *
 * Return: p
 */
char *leet(char *p)
{
	int i = 0;
	int j = 0;
	char q[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char r[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};


	for (p = 0; p[i] != '\0'; i++)
	{
		for (j = 0; r[j] != '\0'; j++)
		{
			if (p[i] == r[j])
			{
				p[i] = q[j];
			}
		}
		i++;
	}
	return (p);
}


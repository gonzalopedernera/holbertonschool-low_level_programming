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
	char q[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char r[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};


	while (p[i])
	{
		for (; p[i] >= 'a' && p[i] <= 'z'; i++)
		{
			if (p[i] == r[i])
			{
				p[i] = q[i];
			}
		}
		i++;
	}
	return (p);
}


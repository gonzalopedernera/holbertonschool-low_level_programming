#include "main.h"
/**
 * string_toupper - turns all lowercase into uppercase on a string
 *
 * @p: string
 *
 * Return: p
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = (int)p[i] - 32;
		}
	}
	return (p);
}

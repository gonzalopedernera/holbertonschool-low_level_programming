#include "main.h"
/**
 * _strpbrk - searches a string for any ocurrence of a set of bytes
 *
 * @s: the string to search in
 *
 * @accept: the set of bytes to search
 *
 * Return: all matching bytes if true, null if false
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		{
			return (s);
		}
		}
		s++;
	}
	return ('\0');
}

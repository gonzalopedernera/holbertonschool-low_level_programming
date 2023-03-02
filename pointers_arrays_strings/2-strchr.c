#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: points to the string
 *
 * @c: the character
 *
 * Return: null if false, the first occurrence of c if true
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	p = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			*p = s[i];
		}
		else
		{
			return ('\0');
		}
	}
	return (p);
}


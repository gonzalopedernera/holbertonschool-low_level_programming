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

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s != c)
	{
		return ('\0');
	}
	return (s);
}


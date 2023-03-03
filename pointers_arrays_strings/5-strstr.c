#include "main.h"
/**
 * _strstr - locates a substring
 *
 * @haystack: main string
 *
 * @needle: substring to be located in haystack
 *
 * Return: substring if exists, 0 if no match
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *p;

		for (i = 0; needle[i] != '\0'; i++)
		{
			if (needle[i] == '\0')
			{
				return (haystack);
			}
			for (j = 0; haystack[j] != '\0';)
			{
				if (needle[i] == haystack[j])
				{
					p = haystack + j;
				}
				j++;
			}
			if (needle[i] != haystack[j])
			{
				break;
			}
		}
		if (p[0] == '\0')
		{
			return (0);
		}
	return (p);
}

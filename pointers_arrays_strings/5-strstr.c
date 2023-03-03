#include "main.h"
/**
 * _strstr - locates a substring
 *
 * @haystack: main string
 *
 * @needle: substring to be located in haystack
 *
 * Return: substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *p;

		for (i = 0; needle[i] != '\0'; i++)
		{
			for (j = 0; haystack[j] != '\0'; )
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
	return (p);
}

#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *
 * @p: a string
 *
 * Return: p
 */
char *cap_string(char *p)
{
	int i;
	int l = 0;

	for (i = 0; p[i] != '\0'; i++)
	{
		l++;
	}

	for (i = 0; p[i] != '\0'; i++)
	{
	if (p[i - 1] == ',' || ';' || '.')
	{
		p[i] = (int)p[i] - 32;
	}
	if (p[i - 1] == '!' || '?' || '"')
	{
		p[i] = (int)p[i] - 32;
	}
	if (p[i - 1] == '(' || ')' || '{' || '}')
	{
		p[i] = (int)p[i] - 32;
	}
	if (p[i - 1] == '\t' || '\n' || ' ')
	{
		p[i] = (int)p[i] - 32;
	}
	}
	return (p);
}

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
	int i = 0;

	while (p[i])
	{
		for (; p[i] >= 'a' && p[i] <= 'z' ; i++)
		{
			if (p[i - 1] == ',' || p[i - 1] == ';' || p[i - 1] == '.')
			{
				p[i] = (int)p[i] - 32;
			}
			if (p[i - 1] == '!' || p[i - 1] == '?' || p[i - 1] == '"')
			{
				p[i] = (int)p[i] - 32;
			}
			if (p[i - 1] == '(' || p[i - 1] == ')')
			{
				p[i] = (int)p[i] - 32;
			}
			if (p[i - 1] == '{' || p[i - 1] == '}')
			{
				p[i] = (int)p[i] - 32;
			}
			if (p[i - 1] == '\t' || p[i - 1] == '\n' || p[i - 1] == ' ')
			{
				p[i] = (int)p[i] - 32;
			}
			if (i == 0)
			{
				p[i] = (int)p[i] - 32;
			}
		}
		i++;
	}
	return (p);
}

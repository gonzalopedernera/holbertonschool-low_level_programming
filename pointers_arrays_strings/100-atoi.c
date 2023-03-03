#include "main.h"
/**
 * _atoi - converts a string to an integer
 *
 * @s: pointer to a string
 *
 * Return: string converted
 */
int _atoi(char *s)
{
	unsigned int nc = 1;
	unsigned int i = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			nc *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			i = i * 10 + (*s - '0');
		}
		else if (i > 0)
		{
			break;
		}
		s++;
	}
	return (i * nc);
}

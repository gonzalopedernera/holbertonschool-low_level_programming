#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 *
 * @s: a string
 */
void rev_string(char *s)
{
	int i;
	int l = strlen(s);
	char p[1000];
	int j = 0;

	for (i = (l - 1); i >= 0; i--)
	{
		p[j] = s[i];
		j++;
	}
	strcpy(s, p);
}


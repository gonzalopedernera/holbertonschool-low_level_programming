#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc(sizeof(s) * size);

	for (i = 0; s[i] == '\0';)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

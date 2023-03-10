#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 *
 * @argc: counts argument to main
 *
 * @argv: argument to main
 *
 * Return: 1 if not a digit. Else, 0.
 */

int main(int argc, char *argv[])
{
	int s = 0;
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		for (j = 0; argv[i][j] != '\0';)
		{
		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
		j++;
		}
	s = s + atoi(argv[i]);
	}

	printf("%d\n", s);
	return (0);
}

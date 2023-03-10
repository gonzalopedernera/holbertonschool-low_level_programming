#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *
 * @argc: argument to main
 *
 * @argv: argument to main
 *
 * Return: 1 if argc does not recieve two values. Else, 0
 */
int main(int argc, char *argv[])
{
	int i;
	int m;
	int a;
	int b;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	m = a * b;

	printf("%d\n", m);
	return (0);
}

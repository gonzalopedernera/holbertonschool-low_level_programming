#include "main.h"
/**
 * main - prints the name of the function
 *
 * @argc: argument to main
 *
 * @argv: argument to main
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}


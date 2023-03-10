#include "main.h"
/**
 * main - prints the number of arguments passed into it
 *
 * @argc: counts arguments to main
 *
 * @argv: arguments to main
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

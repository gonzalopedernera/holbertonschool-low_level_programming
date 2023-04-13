#include "main.h"
/**
 * main - copies the content of a file into another one
 *
 * @argc: argument counter
 *
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, c;
	char *buffer[1024];
	ssize_t countr, countw;

	if (argc != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}

	file_from = open(argv[1], O_RDONLY);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((countr = read(file_from, buffer, sizeof(buffer))) != 0)
		countw = write(file_to, buffer, countr);

	if (file_from == -1 || countr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1 || countw == -1)
	{
		close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	c = close(file_from);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_from);
		exit(100);
	}
	return (0);
}

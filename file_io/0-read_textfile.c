#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file to read
 *
 * @letters: number of letters to read
 *
 * Return: number of letters it could read and print, or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rc, fd;
	char *buffer;

	buffer = malloc(letters + 1);
	if (buffer == NULL)
		return (1);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	rc = read(fd, buffer, letters);
	if (rc == -1)
	{
		free(buffer);
		return (0);
	}

	write(1, buffer, letters);

	return (rc);
}

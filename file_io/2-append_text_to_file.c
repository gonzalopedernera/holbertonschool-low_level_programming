#include "main.h"
/**
 * _memcpy - copies a n amount of bytes from src to dest
 *
 * @dest: destiny of the copy
 *
 * @src: source of the copy
 *
 * @n: number of bytes to be copied
 *
 * Return: the copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j <= (n - 1); j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: file to append text to
 *
 * @text_content: text to append to filename
 *
 * Return: 1 on success, -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	char *buffer;

	if (filename == NULL)
		return (-1);

	while (text_content && text_content[i] != '\0')
	{
		i++;
	}
	i++;

	buffer = malloc(i);
	if (buffer == NULL)
		return (1);

	if (text_content)
		_memcpy(buffer, text_content, i);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
	{
		free(buffer);
		return (-1);
	}

	if (text_content != NULL)
	{
	write(fd, buffer, i - 1);
	}
	else
		return (1);

	close(fd);
	free(buffer);
	return (1);
}

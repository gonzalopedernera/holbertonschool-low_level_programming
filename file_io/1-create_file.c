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
 * create_file - creates a file and adds content to it
 *
 * @filename: name of the new file
 *
 * @text_content: text to write in the new file
 *
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
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

	if (text_content)
		_memcpy(buffer, text_content, i);

	buffer[i - 1] = '\0';

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		free(buffer);
		return (-1);
	}

	write(fd, buffer, i - 1);
	close(fd);
	free(buffer);
	return (1);
}

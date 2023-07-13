#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: filename
 * @text_content: NULL terminated string to write to the file
 * Return: return 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	bytes = write(fd, text_content, len);
	close(fd);
	if (bytes == -1)
		return (-1);
	return (1);
}

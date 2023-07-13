#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: filename
 * @text_content: NULL terminated string to write to the file
 * Return: return 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	bytes = write(fd, text_content, strlen(text_content));
	if (bytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

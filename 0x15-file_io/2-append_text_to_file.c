#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename
 * @text_content: string
 * Return: 1 on success else -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
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

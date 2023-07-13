#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: number of printed characters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		close(fd);
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		close(fd);
		return (0);

	bytes = read(fd, buffer, letters);
	if (bytes == -1)
		close(fd);
		return (0);

	if (write(STDIN_FILENO, buffer, bytes) == -1)
		close(fd);
		return (0);

	free(buffer);
	close(fd);
	return (bytes);
}

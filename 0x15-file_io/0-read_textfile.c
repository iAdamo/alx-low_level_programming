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
	ssize_t rtrn, bytes;
	int fd;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}
	bytes = read(fd, buffer, letters);
	if (bytes < 0)
	{
		free(buffer);
		return (0);
	}
	rtrn = write(STDOUT_FILENO, buffer, bytes);
	free(buffer);
	close(fd);

	if (rtrn < 0)
		return (0);
	return (bytes);
}

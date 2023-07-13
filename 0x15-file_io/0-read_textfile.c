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
	ssize_t byte;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(4096);
	if (buffer == NULL)
		return (0);
	byte = read(fd, buffer, letters);
	if (byte == -1)
		return (0);
	if (write(STDIN_FILENO, buffer, letters) == -1)
		return (0);
	free(buffer);
	close(fd);

	return (byte);
}

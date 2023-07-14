#include "main.h"
/**
 * copy_program -  program that copies the content of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
*/
void copy_program(char *file_from, char *file_to)
{
	int fd, buff_size = 1024, bytes;
	char *buffer;

	while (buff_size)
	{
		fd = open(file_from, O_RDONLY);
		buffer = malloc(sizeof(char) * buff_size);
		bytes = read(fd, buffer, buff_size);
		if (fd == -1 || buffer == NULL || bytes == -1)
		{
			free(buffer);
			close(fd);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		if (close(fd) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
		umask(0002);
		fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
		bytes = write(fd, buffer, bytes);
		if (fd == -1 || bytes == -1)
		{
			free(buffer);
			close(fd);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		free(buffer);
		if (close(fd) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
		if (buff_size > bytes)
			break;
		buff_size = buff_size + 1024;
	}
}
/**
 * main - Main Entry
 * @ac: argument count
 * @av: argumemt vectors (array of pointers)
 * Return: 0 on success
*/
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	copy_program(av[1], av[2]);

	return (0);
}

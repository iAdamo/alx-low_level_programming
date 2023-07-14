#include "main.h"
/**
 * copy_program -  program that copies the content of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
*/
void copy_program(char *file_from, char *file_to)
{
	int fd_from, fd_to, buff_size = 1024, bytes;
	char *buffer;

	while (buff_size)
	{
		fd_from = open(file_from, O_RDONLY);
		buffer = malloc(sizeof(char) * buff_size);
		bytes = read(fd_from, buffer, buff_size);
		if (fd_from == -1 || buffer == NULL || bytes == -1)
		{
			free(buffer);
			close(fd_from);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
		bytes = write(fd_to, buffer, bytes);
		if (fd_to == -1 || bytes == -1)
		{
			free(buffer);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		free(buffer);
		if (close(fd_from) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		if (close(fd_to) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
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

#include "main.h"

int main(int ac, char **av)
{
	int fd_to, fd_from;
	ssize_t bytes;
	char *file_from, *file_to;
	char *buffer;
	int buff_size = 1024;

	/*if the number of argument is not the correct one*/
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	file_from = strdup(av[1]);
	file_to = strdup(av[2]);

	
	while (buff_size)
	{
		fd_from = open(file_from, O_RDWR);
		if (fd_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		buffer = malloc(sizeof(char) * buff_size);
		if (buffer == NULL)
			exit(98);
		bytes = read(fd_from, buffer, buff_size);
		printf("%ld\n", bytes);
		if (bytes == -1)
			return (98);

		/**
		 * if file_to already exists, truncate it
		 * if you can not create or if write to file_to fails
		*/
		fd_to = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
		if (fd_to == -1)
			exit(99);
		bytes = write(fd_to, buffer, bytes);
		printf("%ld\n", bytes);
		if (bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		if (buff_size > bytes)
			break;
		free(buffer);
		close(fd_from);
		buff_size = buff_size + 1024;
	}

	return (0);
}
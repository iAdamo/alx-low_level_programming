#include <stdio.h>
#include <stdlib.h>
/**
 * main - main - entry
 * @argc: argument count
 * @argv: argument vector
 * Return: returns opcode of main function
*/
int main(int argc, char *argv[])
{
	int i, byte;
	char *ptr;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		puts("Error");
		exit(2);
	}
	ptr = (char *)main;

	for (i = 0; i < byte; i++)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", ptr[i]);
			break;
		}
		printf("%02hhx ", ptr[i]);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
  * main - main entry
  * @argc: First parameter
  * @argv: Second parameter
  *
  * Return: exit(EXIT_SUCCESS)
  */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	exit(EXIT_SUCCESS);
}

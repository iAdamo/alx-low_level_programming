#include <stdio.h>
#include <stdlib.h>

/**
  * main - main entry
  * @argc: argument count
  * @argv: argument vector
  * Description: Program that prints all arguments it receives.
  * Return: exit(EXIT_SUCCESS)
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	exit(EXIT_SUCCESS);
}

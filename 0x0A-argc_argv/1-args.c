#include <stdio.h>
#include <stdlib.h>

/**
  * main - Main entry
  * @argc: First parameter
  * @argv: Second parameter
  *
  * Return: exit(EXIT_SUCCESS)
  */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS);
}

#include <stdio.h>
#include <stdlib.h>

/**
  * main - main entry
  * @argc: First parameter
  * @argv: Second parameter
  *
  * Return: exit(EXIT_SUCCESS)
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	exit(EXIT_SUCCESS);
}

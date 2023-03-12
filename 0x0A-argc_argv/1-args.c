#include <stdio.h>
#include <stdlib.h>

/**
  * main - Main entry
  * @argc: First parameter
  * @argv: Second parameter
  * Description: prints the number of arguments passed into it.
  * Return: exit(EXIT_SUCCESS)
  */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS);
}

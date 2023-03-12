#include <stdio.h>
#include <stdlib.h>

/**
  * main - Main entry
  * @argc: First parameter
  * @argv: Second parameter
  * Description: 
  * Return: exit(EXIT_SUCCESS)
  */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS);
}

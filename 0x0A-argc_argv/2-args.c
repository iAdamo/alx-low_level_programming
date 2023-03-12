#include <stdio.h>
#include <stdlib.h>

/**
  * main - main entry
  * @agrc: argument count
  * @argv: argument vector
  * Description: Program that prints all arguments it receives.
  * Return: exit(EXIT_SUCCESS)
  */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	
	exit(EXIT_SUCCESS);
}


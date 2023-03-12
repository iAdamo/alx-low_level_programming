#include <stdio.h>
#include <stdlib.h>

/**
  * main - main entry
  * @argc: argument count
  * @argv: argument vector
  * Deacription: Program that multiplies two numbers.
  * Return: 0 if success, else 1
  */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int mul = a*b;
		
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}

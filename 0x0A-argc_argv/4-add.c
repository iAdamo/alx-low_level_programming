#include <stdio.h>
#include <stdlib.h>

/**
  * main - Main entry
  * @argc: argument count
  * @argv: argument vector
  * Description: program that adds positive number
  * Return: 0 success else 1
  */

int main(int argc, char *argv[])
{

	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

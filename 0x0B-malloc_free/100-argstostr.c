#include "main.h"
/**
 * _strlen - lenght of a string
 * @str: function argument
 * Return: the lenght of the string
*/
int _strlen(char *str)
{
	if (!(*str))
	{
		return (0);
	}
	return (_strlen(str + 1) + 1);
}
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: array of argument strings
 * Return: pointer to concatenated strings with newlines
*/
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i;
	int len = 0, j = 0, n = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]) + 1;
	}
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			ptr[n] = av[i][j];
			n++;
		}
		ptr[n] = '\n';
		n++;
	}
	return (ptr);
}

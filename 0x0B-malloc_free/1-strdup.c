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
 * _strdup - duplicates a string to a new pointer
 * @str: string to be duplicated
 * Return: A pointer of the new pointer
*/
char *_strdup(char *str)
{
	int i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(_strlen(str) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}

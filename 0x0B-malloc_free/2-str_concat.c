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
 * str_concat - function that concatenate strings
 * @s1: first string
 * @s2: second string
 * Return: returns a pointer
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, len;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len = _strlen(s1) + _strlen(s2);
	ptr = malloc(len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}

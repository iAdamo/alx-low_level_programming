#include "main.h"
/**
 * wordCount - counts the amount of non spaced words in a string
 * @str: strings to go through
 * Return: number of non spaced words
*/
int wordCount(char *str)
{
	int i = 0, count = 0;
	int flag;

	while (str[i])
	{
		flag = 0;
		while (str[i] != ' ')
		{
			flag = 1;
			i++;
		}
		if (flag == 1)
		{
			count++;
		}
		i++;
	}
	return (count);
}
/**
 * ptrData - initializes data from a 1-di_array to 2-di_array
 * @str: one dimensional pointer data to copy
 * @ptr: two dimensional pointer
 * Return: return two dimensional array of data
*/
char **ptrData(char *str, char **ptr)
{
	int i;
	int a = 0, b = 0;

	i = 0;
	while (str[i])
	{
		b = 0;
		while (str[i] != ' ' && str[i] != '\0')
		{
			ptr[a][b] = str[i];
			i++;
			b++;
		}
		if (b > 0)
		{
			ptr[a][b] = ' ';
			a++;
		}
		i++;
	}
	return (ptr);
}
/**
 * strtow - splits a string into words
 * @str: string
 * Return: returns a pointer to an array of strings (words)
*/
char **strtow(char *str)
{
	int i = 0;
	int word, len;
	int width = 0;
	char **ptr, **ptrs;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	word = wordCount(str);
	ptr = malloc(sizeof(char *) * word);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i])
	{
		len = 0;
		while (str[i] != ' ' && str[i] != '\0')
		{
			len++;
			i++;
		}
		if (len > 0)
		{
			ptr[width] = malloc(sizeof(char) * (len + 1));
			width++;
		}
		i++;
	}
	ptr[width] = NULL;
	ptrs = ptrData(str, ptr);
	return (ptrs);
}

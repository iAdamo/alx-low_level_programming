#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * initializes data from a 1-di_array to 2-di_array
 * @str: one dimensional pointer data to copy
 * @ptr: two dimensional pointer
 * Return: return two dimensional array of data
*/
char **finalptr(char *str, char **ptr)
{
	int i = 0, j = 0, k = 0;

	while (str[i])
	{
		if (str[i] != ' ')
		{
			ptr[j][k] = str[i];
			k++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				ptr[j][k] = '\0';
				j++;
				k = 0;
			}
		}
		i++;
	}
	return (ptr);
}
/**
 * wordCount - counts the amount of non spaced words in a string
 * @str: strings to go through
 * Return: number of non spaced words
*/
int wordcount(char *str)
{
	int i;
	int count = 0;

	i = 0;
	while (str[i])
	{
		if ((str[i] != ' ') && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}
	return (count);
}
/**
 * strtow - splits a string into words
 * @str: string
 * Return: returns a pointer to an array of strings (words)
*/
char **strtow(char *str)
{
	int i, len;
	int a = 0, count = 0;
	char **ptr, **final;

	if (str == NULL)
		return (NULL);
	len = wordcount(str);
	ptr = malloc(sizeof(char *) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			count++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				ptr[a] = malloc(sizeof(char) * (count + 1));
				if (ptr[a] == NULL)
				{
					for (a = a - 1; a >= 0; a--)
					{
						free(ptr[a]);
					}
					free(ptr);
					return (NULL);
				}
				a++;
				count = 0;
			}
		}
		i++;
	}
	final = finalptr(str, ptr);
	return (final);
}

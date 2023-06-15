#include "main.h"
/**
 * ptrData - initializes data from a 1-di_array to 2-di_array
 * @str: one dimensional pointer data to copy
 * @ptr: two dimensional pointer
 * Return: return two dimensional array of data
*/
char **ptrData(char *str, char **ptr)
{
	int i, j, b;
	int a = 0;

	for (i = 0; str[i]; i++)
	{
		b = 0;
		for (j = i; str[j] != ' '; j++)
		{
			ptr[a][b] = str[j];
			b++;
		}
		i = j;
		if (b > 0)
		{
			a++;
		}
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
	char **ptr, **ptrs;
	int i, row;
	int col = 0, wid = 0, a = 0;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char *) * col);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		row = 0;
		while (str[i] != ' ')
		{
			row++;
			i++;
		}
		if (row > 0)
		{
			ptr[wid] = malloc(sizeof(char) * row);
			if (ptr[wid] == NULL)
			{
				for (a = 0; a <= wid; a++)
				{
					free(ptr[a]);
				}
				free(ptr);
				return (NULL);
			}
			wid++;
		}
	}
	ptr[wid] = NULL;
	ptrs = ptrData(str, ptr);
	return (ptrs);
}

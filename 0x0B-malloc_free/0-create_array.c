#include "main.h"
/**
 * create_array - creates an array of chars, initializes it with specific char
 * @size: size of array
 * @c: character for each array
 * Return: returns pointer to the function
*/
char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

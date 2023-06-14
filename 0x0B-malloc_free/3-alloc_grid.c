#include "main.h"
/**
 * alloc_grid - create two dimensional arrays of intergers
 * @width: width of the array
 * @height: height of the array
 * Return: returns a pointer to a 2 dimensional array of integers
*/
int **alloc_grid(int width, int height)
{
	int **row;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	row = malloc(sizeof(int *) * height);
	if (row == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		row[i] = malloc(sizeof(int) * width);
		if (row[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(row[j]);
			}
			free(row);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			row[i][j] = 0;
		}
	}
	return (row);
}

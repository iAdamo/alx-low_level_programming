#include "function_pointers.h"
/**
 * int_index -  function that searches for an integer
 * @array: pointer for array
 * @size: size of array
 * @cmp: function pointer
 * Return: returns the index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			break;
		}
	}
	if (i == size)
	{
		return (-1);
	}

	return (i);
}

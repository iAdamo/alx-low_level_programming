#include "function_pointers.h"
/**
 * array_iterator - iterates the values of an array to functions
 * @array: pointer to array
 * @size: size of array
 * @action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

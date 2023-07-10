#include "main.h"
/**
 * set_bit -  function that sets the value of a bit to 1 at a given index
 * @n: pointer to integer
 * @index: index position
 * Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1 << index;

	if ((*n | bit) != 0)
	{
		*n |= bit;
		return (1);
	}
	return (-1);
}

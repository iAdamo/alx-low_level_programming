#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: index position
 * Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1 << index;

	if (bit == 0)
		return (-1);
	*n ^= bit;
	return (1);
}

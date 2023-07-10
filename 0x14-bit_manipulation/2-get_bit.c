#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: index position
 * Return: returns the value of bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = 1 << index;

	if (index == 0)
		return (0);
	if (bit == 0 || (n & bit) == 0)
		return (-1);
	if ((n & bit))
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: index position
 * Return: returns the value of bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0)
		return (-1);
	while (index)
	{
		n >>= 1;
		if (n == 0)
		{
			return (-1);
		}
		index--;
	}
	if ((n & 1) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
/**
 * flip_bits -  function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: Before bits
 * @m: After bits
 * Return: the number of flipped bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t index;
	unsigned int count = 0;
	unsigned long int bit;
	unsigned long int before_bit;
	unsigned long int after_bit;

	for (index = 0; index < 31; index++)
	{
		bit = 0x01;
		bit <<= index;
		before_bit = (n & bit);
		after_bit = (m & bit);
		if (before_bit != after_bit)
			count++;
	}

	return (count);
}

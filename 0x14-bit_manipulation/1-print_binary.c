#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned interger
*/
void print_binary(unsigned long int n)
{
	/*Maximum number of bits in an integer type is 32*/
	unsigned int bit = 1 << 31;
	unsigned int flag = 0;
	/*If n tends to be a whole number 0*/
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/*loop through every bit, use the & to check for 1's and 0's*/
	while (bit)
	{
		if ((n & bit) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1 && (n & bit) == 0)
		{
			_putchar('0');
		}
		/*shift bits by one to the right*/
		bit >>= 1;
	}
}

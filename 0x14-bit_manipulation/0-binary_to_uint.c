#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: binary string
 * Return: return decimal value
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, result = 0, base = 1;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	while (len)
	{
		if (b[len - 1] != '1' && b[len - 1] != '0')
			return (0);
		if (b[len - 1] == '1')
			result += base;
		base *= 2;
		len--;
	}
	return (result);
}

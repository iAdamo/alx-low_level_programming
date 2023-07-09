#include "main.h"
/**
 * _pow - gets the power form of an int
 * @num: number
 * @idx: power
 * Return: power of a number
*/
int _pow(int num, int idx)
{
	int sum = num;

	if (idx == 0)
	{
		return (1);
	}
	if (idx == 1)
	{
		return (num);
	}
	while (idx > 1)
	{
		sum = (num * sum);
		idx--;
	}
	return (sum);
}
/**
 * _strlen - length of a string
 * @b: pointer to a string
 * Return: return the lenght of a string
*/
int _strlen(const char *b)
{
	if (!(*b))
	{
		return (0);
	}
	return (_strlen(b + 1) + 1);
}
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: binary string
 * Return: return decimal value
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int bin = 0;
	int power = _strlen(b) - 1;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] == '1' || b[i] == '0')
		{
			bin = bin + ((b[i] - '0') * (_pow(2, power)));
			power--;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (bin);
}

#include "variadic_functions.h"
/**
 * sum_them_all - sum up all parameters
 * @n: count of parameters
 * Return: returns the sum of all its parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg;

	if (n == 0)
	{
		return (0);
	}

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, unsigned int);
	}
	va_end(arg);
	return (sum);
}

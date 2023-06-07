#include "main.h"
/**
  * factorial - prints the factorial of a number
  * @n: variable for an integer
  * Return: returns the factorial
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (factorial(n - 1) * n);
}

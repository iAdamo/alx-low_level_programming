#include "main.h"
/**
  * divisor - check if x is divisible by any number
  * @x: number to be checked
  * @y: divisor
  * Return: return the 1 is not divisble else 0 if divisible
  */
int divisor(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	return (divisor(x, y - 1) * 1);
}
/**
  * is_prime_number - check for prime number
  * @n: number to be checked
  * Return:  returns 1 if the input integer is a prime number, else return 0.
  */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (divisor(n, n / 2));
}

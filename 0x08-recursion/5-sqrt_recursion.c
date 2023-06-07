#include "main.h"
/**
  * mul - check for multiples of a
  * @a: variable holding n from sqrt
  * @b: numbers as test for mutiple
  * Return: multiple of a
  */
int mul(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b == a / 2 || a < 0)
	{
		return (-1);
	}
	return (mul(a, b + 1) * 1);
}
/**
  * _sqrt_recursion - function that rerutns natural square root of a number.
  * @n: a number
  * Return: return the square root
  */
int _sqrt_recursion(int n)
{
	int res;

	res = mul(n, 1);
	return (res);
}

#include "main.h"

/**
  * _puts_recursion - prints strings to standard output
  * @c: pointer to character
  */

void _puts_recursion(char *c)
{
	if (*c)
	{
		_putchar(*c);
		_puts_recursion(c + 1);
	}
	else
	{
		_putchar('\n');
	}
}

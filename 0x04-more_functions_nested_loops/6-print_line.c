#include "main.h"

/**
 * print_line - prints a straight line using '_'
 * @n: the number of '_' to be printed
 */

void print_line(int n)
{

	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}



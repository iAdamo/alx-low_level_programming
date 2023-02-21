#include "main.h"

/**
  * print_alphabet -  prints the alphabet
  */

void print_alphabet(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		_putchar(low);
		low++;
	}
	_putchar('\n');
}


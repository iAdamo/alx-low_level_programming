#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times the alphabet
  */

void print_alphabet_x10(void)
{
	char low;
	int count = 0;

	while (count < 10)
	{
		low = 'a';

		while (low <= 'z')
		{
			_putchar(low);
			low++;
		}
		_putchar('\n');

		count++;
	}
}

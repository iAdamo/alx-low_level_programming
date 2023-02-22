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
		for (low = 'a'; low <= 'z'; low++)
		{
			_putchar(low);
		}
		_putchar('\n');
		count++;
	}
}

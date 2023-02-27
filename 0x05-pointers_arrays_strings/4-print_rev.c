#include "main.h"

/**
  * print_rev - prints a string, in reverse
  * @s: parameter
  *
  */

void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

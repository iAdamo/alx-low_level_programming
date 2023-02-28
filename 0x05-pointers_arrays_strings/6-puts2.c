#include "main.h"

/**
  * puts2 - print few character of a string
  * @str: parameter
  */

void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		if ((*str % 2) == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}

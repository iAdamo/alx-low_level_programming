#include "main.h"

/** puts_half - prints half of a string, followed by a new line
  * @str: parameter
  *
  */

void puts_half(char *str)
{
	int i ;

	for (i = 0; *str != '\0'; i++)
	{
		str++;
	}
	str -= (i / 2);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

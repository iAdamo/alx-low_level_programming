#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Succes)
  */

int main(void)
{
	char rev = 'z';

	while (rev >= 'a')
	{
		putchar(rev);
		rev--;
	}
	putchar('\n');

	return (0);
}

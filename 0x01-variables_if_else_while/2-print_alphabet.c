#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char m = 'a';
	char n = 'z';

	while (m <= n)
	{
		putchar(m);
		m++;
	}
	putchar('\n');

	return (0);
}

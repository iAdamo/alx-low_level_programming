#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int m = 0;
	char n = 'a';

	while (m < 10)
	{
		putchar(m + '0');
		m++;
	}
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);

}

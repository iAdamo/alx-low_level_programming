#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: number separator
 * @n: argument count
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, j;

	if (separator == NULL)
	{
		return;
	}
	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		for (j = 0; separator[j]; j++)
		{
			if (i != n - 1)
			{
				putchar(separator[j]);
			}
		}
	}
	putchar('\n');

	va_end(arg);
}

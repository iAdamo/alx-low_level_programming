#include "variadic_functions.h"
/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: output separtors
 * @n: number of string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, j;
	char *ptr;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(arg, char *);
		if (ptr != NULL)
		{
			printf("%s", ptr);
		}
		else
		{
			puts("(nil)");
		}
		if (i != n - 1)
		{
			for (j = 0; separator[j]; j++)
			{
				putchar(separator[j]);
			}
		}
	}
	putchar('\n');

	va_end(arg);
}

#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: format identifiers
*/
void print_all(const char * const format, ...)
{
	int i;
	char *str;
	va_list arg;

	va_start(arg, format);
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arg, int));
			break;
		case 'i':
			printf("%d", va_arg(arg, int));
			break;
		case 'f':
			printf("%f", va_arg(arg, double));
			break;
		case 's':
			str = va_arg(arg, char*);
			if (str != NULL)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
		{
			putchar('\n'), i++;
			continue;
		}
		printf(", "), i++;
	}
	va_end(arg);
}

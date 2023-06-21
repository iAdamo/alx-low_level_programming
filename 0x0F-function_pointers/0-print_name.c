#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: pointer to string
 * @f: function pointer to a function address
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

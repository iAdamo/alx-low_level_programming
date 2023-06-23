#include "3-calc.h"
/**
 * get_op_func - get the appropriate function call
 * @c: character to determine which function to call
 * Return: returns the approriate function address
*/
int (*get_op_func(char *c))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *c)
	{
		i++;
	}
	return (ops[i].f);
}

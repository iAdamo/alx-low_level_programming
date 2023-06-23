#include "3-calc.h"
/**
 * main - main entry
 * @argc: argument count
 * @argv: arguments
 * Return: return 0 if success
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;
	int (*func)(int, int);
	int result;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	if (get_op_func(op) == NULL)
	{
		puts("Error");
		exit(99);
	}
	if ((num2 == 0 && *op == '/') || (num2 == 0 && *op == '%'))
	{
		puts("Error");
		exit(100);
	}
	func = get_op_func(op);
	result = func(num1, num2);

	printf("%d\n", result);

	return (0);
}

#include "main.h"

/**
  * _strlen_recursion - prints the lenght of a string
  * @s: pointer to a string
  * Return: lenght of the string
  */

int _strlen_recursion(char *s)
{
	if (!(*s))
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

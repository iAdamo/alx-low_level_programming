#include "main.h"

/**
  * _strlen - length of a string
  * @s: first parameter
  *
  * Return: return an integer
  */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}

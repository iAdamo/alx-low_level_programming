#include "main.h"

/**
  *  _isdigit -  checks for a digit (0 through 9)
  * @c: check for c 
  * Return: 1 if c is a digit, return 0 otherwise
  */

int _isdigit(int c)
{
	int i = 0;

	if (c >= '0' && c <= '9')
	{
		i = 1;
	}
	return (i);

}

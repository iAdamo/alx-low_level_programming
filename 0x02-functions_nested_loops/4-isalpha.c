#include "main.h"

/**
  * _isalpha - checks for alphabetic character.
  * @c: is a letter
  * Return: 1 else 0
  */

int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

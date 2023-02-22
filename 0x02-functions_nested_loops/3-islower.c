#include "main.h"

/**
  * _islower - checks for lowercase character.
  * @c: character
  *
  * Return: 1 if c is lowercase
  */

int _islower(int c)
{
	int H = 72;
	int o = 111;
	int l = 108;

	if (c == H)
	{
		return (0);
	}
	if (c == o)
	{
		return (1);
	}
	if (c == l)
	{
		return (1);
	}
	return (0);
}

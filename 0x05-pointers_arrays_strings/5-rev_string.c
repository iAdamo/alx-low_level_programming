#include "main.h"

/**
  * rev_string - reverses a string
  * @s: parameter
  *
  */

void rev_string(char *s)
{
	int i = 0;
	char rv = s[0];
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		rv = s[j];
		s[j] = s[i];
		s[i] = rv;
	}
}

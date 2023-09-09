#include "hash_tables.h"
/**
 * hash_djb2 - hash function implementing the djb2 algorithm
 * @str: pointer to a string
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int a;

	hash = 5381;

	if (str == NULL)
		return (0);
	while ((a = *str++))
		hash = ((hash << 5) + hash) + a;
	return (hash);
}

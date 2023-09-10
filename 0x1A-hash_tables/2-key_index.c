#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: key
 * @size: size of the array of the hash table
 * Description: Hashing by division
 * The scheme in hashing by division is as follows:
 * index = hash_digest(hash_djb2(key)) mod m(size of the table)
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key in a hash table
 * @key: The key to be hashed
 * @size: The size of the hash table
 *
 * Return: Index at which the key pair should be stored in the hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}

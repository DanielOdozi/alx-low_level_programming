#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: Key is key
 * @size: The size of the table
 *
 * Return: Returns the index at which the key/value pair should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash = hash_djb2(key);

    return (hash % size);
}

#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * key_index - Calculates the index of a key in a hash table
 * @key: The key for which to calculate the index
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Calculate the hash value using the djb2 algorithm */
	hash_value = hash_djb2(key);

	/* Calculate the index using the hash value and the size of the array */
	return (hash_value % size);
}

#include "hash_tables.h"

/**
 * key_index - obtener el index a traves de una key
 * @key: 
 * 
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, hash_key = 0;

	hash_key = hash_djb2(key);
	index = hash_key % size;

	return (index);
}

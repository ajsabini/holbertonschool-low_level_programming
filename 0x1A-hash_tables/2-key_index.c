#include "hash_tables.h"

/**
 * key_index - obtener el index a traves de una key
 * @key: la llave para obtener el index
 * @size: el tamaño del array, para obtener el index
 * Return: el index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, hash_key = 0;

	hash_key = hash_djb2(key);
	index = hash_key % size;

	return (index);
}

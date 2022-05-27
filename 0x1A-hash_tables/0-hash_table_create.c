#include "hash_tables.h"

/**
 * hash_table_create - crear la hash tble, array de puntero
 * @size: el tamaño arrray de punteros
 * Return: la nueva struct hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);

	new_ht->array = malloc(size);
	if (new->ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	new_ht->size = size;
	return (new_ht);
}

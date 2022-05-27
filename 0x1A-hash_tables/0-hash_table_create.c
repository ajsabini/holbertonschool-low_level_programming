#include "hash_tables.h"

/**
 * hash_table_create - crear la hash tble, array de puntero
 * @size: el tamaño arrray de punteros
 * Return: la nueva struct hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;
	unsigned long int i = 0;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);
	
	new_ht->array = malloc(size * sizeof(hash_node_t *));
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	new_ht->size = size;

	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;

	return (new_ht);
}

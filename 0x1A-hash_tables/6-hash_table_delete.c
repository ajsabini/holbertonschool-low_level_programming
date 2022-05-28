#include "hash_tables.h"

/**
 *
 *
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux, *tofree = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux)
		{
			tofree = aux;
			aux = aux->next;
			free(tofree->key);
			free(tofree->value);
			free(tofree);
		}	
	}
	free(ht->array);
	free(ht);
}

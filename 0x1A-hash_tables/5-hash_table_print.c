#include "hash_tables.h"

/**
 * hash_table_print - prtin the ht
 * @ht: la ht a imprimir
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int cent = 0;
	hash_node_t *aux;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			aux = ht->array[i];
			while (aux)
			{
				if (cent == 1)
					printf(", ");
				printf("'%s': '%s'", aux->key, aux->value);
				aux = aux->next;
				cent = 1;
			}
		}
	}
	printf("}\n");
}

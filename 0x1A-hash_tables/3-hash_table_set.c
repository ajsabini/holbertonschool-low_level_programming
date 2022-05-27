#include "hash_tables.h"

/**
 * hash_table_set - setear una llave, agregandola o haciendo update si ya esta
 * @ht: hash table
 * @key: la key a agregar o updatear
 * @value: el valor de la key
 * Return: 0 si falla, 1 si va bien
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *aux_ht = NULL;
	hash_node_t *new_ht = NULL;
	char *valor = NULL;
	unsigned int index = 0;

	if (strlen(key) == 0 || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	aux_ht = ht->array[index];
	while (aux_ht)
	{
		if (strcmp(aux_ht->key, key) == 0)
		{
			valor = strdup(value);
			if (valor == NULL)
				return (0);
			free(aux_ht->value);
			aux_ht->value = valor;
			return (1);
		}
		aux_ht = aux_ht->next;
	}

	new_ht = malloc(sizeof(hash_node_t));
	if (new_ht == NULL)
		return (0);

	new_ht->key = strdup(key);
	new_ht->value = strdup(value);
	new_ht->next = ht->array[index];
	ht->array[index] = new_ht;
	return (1);
}

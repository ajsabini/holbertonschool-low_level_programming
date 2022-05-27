#include "hash_tables.h"

/**
 * hash_table_get - obtener el valor asociado a la llave que nos pasan
 * @ht: la hash table
 * @key: la key para buscar el value
 * Return: el valor asociado a la key o NULL si no existe la key
 * tendria que averiguar el index, a traves de la k y ht que nos dan
 * una vez obt el index, si no estaen null, el aux lo igualo a la pos del
 * array, para obt el primer nodo y poder recorrer la ll, comparando las k
 * y si la encontramos la devolvemos
 */



char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *aux;
	
	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	aux = ht->array[index];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}

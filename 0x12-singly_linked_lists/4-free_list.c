#include "lists.h"

/**
 * free_list - haer un free de la lista list_t.
 * @head: nodo head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *aux = head;
	list_t *tofree;

	for (; aux;)
	{
		tofree = aux;
		aux = aux->next;
		free(tofree->str);
		free(tofree);
	}
}

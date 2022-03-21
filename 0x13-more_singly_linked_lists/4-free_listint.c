#include "lists.h"

/**
 * free_listint - haer un free de la lista listint_t.
 * @head: nodo head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *aux = head;
	listint_t *tofree;

	for (; aux;)
	{
		tofree = aux;
		aux = aux->next;
		/**free(tofree->n);*/
		free(tofree);
	}
}

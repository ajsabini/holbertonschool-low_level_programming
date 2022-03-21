#include "lists.h"

/**
 * pop_listint - haer un free de la lista list_t.
 * @head: nodo head
 * Return: void
 */
int pop_listint(listint_t **head)
{
	int ret = -1;
	listint_t *aux = *head;
	*head = (*head)->next;

	if (!*head)
		return (ret);
	
	ret = aux->n;
	free(aux);

	return (ret);
}

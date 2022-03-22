#include "lists.h"

/**
 * pop_listint - haer un free de la lista list_t.
 * @head: nodo head
 * Return: void
 */
int pop_listint(listint_t **head)
{
	int ret = 0;
	listint_t *aux = *head;

	if (!*head)
		return (ret);

	ret = (*head)->n;
	aux = (*head)->next;
	free(*head);
	*head = aux;

	return (ret);
}

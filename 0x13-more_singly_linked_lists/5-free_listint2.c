#include "lists.h"

/**
 * free_listint2 - hacer un free de la lista listint_t.
 * @head: nodo head
 * Return: void
 */
void free_listint2(listint_t **head)
{

	listint_t *tofree;

	if (head == NULL || *head == NULL)
		return;

	for (; *head;)
	{
		tofree = (*head)->next;
		free(*head);
		*head = tofree;
	}
	*head = NULL;
}

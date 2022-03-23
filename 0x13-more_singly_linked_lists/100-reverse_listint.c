#include "lists.h"
/**
 * reverse_listint - dar vuelta una listint_t
 * @head: nodo head
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *save;
	listint_t *relink;

	if (!(*head))
		return (NULL);

	relink = *head;
	save = relink->next;
	relink->next = NULL;

	for (; save;)
	{
		relink = save;
		save = save->next;
		relink->next = *head;
		*head = relink;
	}
	return (*head);
}

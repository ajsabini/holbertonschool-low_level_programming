#include "lists.h"

/**
 * add_node_end - agregar un nuevo nodo al final de la lista
 * @head: nodo head
 * @str: string
 * Return: new
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int s;
	listint_t *headaux = *head;
	listint_t *new;

	s = n;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = s;
	new->next = NULL;

	if (s && *head)
	{
		for (; headaux->next;)
		{
			headaux = headaux->next;
		}
		new->next = NULL;
		headaux->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}

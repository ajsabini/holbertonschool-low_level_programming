#include "lists.h"

/**
 * get_dnodeint_at_index - obtener el nodo nth de una dlinked
 * @head: header of list
 * @index: nodo index
 * Return: NULL si dall, sin la direccion del nodo
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index && head->next; i++)
		head = head->next;
	if (i == index)
		return (head);
	else
		return (NULL);
}

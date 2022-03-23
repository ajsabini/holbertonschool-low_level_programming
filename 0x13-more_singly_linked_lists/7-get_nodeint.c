#include "lists.h"

/**
 * get_nodeint_at_index - retorna el nodo nth de una listint_t
 * @head: el nodo head
 * @index: eñ indie
 * Return: listint_t*
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		if (i++ < index)
			tmp = tmp->next;
		else
			break;
	}
	return (tmp);
}

#include "lists.h"

/**
 * delete_nodeint_at_index - eliminar nodo de una posiion dada
 * @head: nodo head
 * @index: posicion de la lista a eliminar
 * Return: 1 si puede, -1 si falla
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i = 0;
	listint_t *tmp = *head;
	listint_t *target = NULL;

	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		target = *head;
		*head = target->next;
		free(target);
		return (1);
	}

	while (tmp)
	{
		if (i++ < (index - 1))
			tmp = tmp->next;
		else
			break;
	}
	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	target = tmp->next;
	tmp->next = target->next;
	free(target);
	return (1);
}

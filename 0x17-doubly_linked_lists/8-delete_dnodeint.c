#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - elimina el nodo en la posicion
 * @head: el header de la dlinked
 * @index: el index para eliminar
 * Return: -1 si da error, 1 si salio bien
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *aux;

	if (*head)
	{
		aux = *head;
		for (i = 0; i < index && (*head)->next; i++)
			aux = aux->next;
		if (i == index)
		{
			if (i == 0)
				*head = (*head)->next;
			if (aux->prev != NULL)
				aux->prev->next = aux->next;
			if (aux->next != NULL)
				aux->next->prev = aux->prev;
			aux->next = NULL;
			aux->prev = NULL;
			free(aux);
			return (1);
		}
	}
	return (-1);
}

#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - liberar una dlinked
 * @head: header de la dlinked
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}

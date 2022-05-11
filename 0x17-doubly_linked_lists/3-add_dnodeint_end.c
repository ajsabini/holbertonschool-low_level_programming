#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - agregar un nodo al final de la dlinked
 * @n: el dato a agregar
 * @head: header de la dlinked
 * Return: si falla, retorna NULL, si no la direcion del nuevo nodo agregado
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Fallo el malloc\n");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;
		new->prev = aux;
		aux->next = new;
	}
	return (new);
}

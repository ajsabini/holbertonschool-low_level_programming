#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - agregar un nuevo nodeo al principio de la dlinked
 * @n: el entero a agregar
 * @head: el head de la lista
 * Return: NULL si falla, sino la direccion de mem del nuevo nodo
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		(*head)->prev = new;
		new->next = *head;
		*head = new;
	}
	return (new);
}

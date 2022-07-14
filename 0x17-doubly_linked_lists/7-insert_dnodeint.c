#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * lendlist - largo de la lista
 * @h: header de la dlinked
 * Return: el largo
 */

unsigned int lendlist(dlistint_t **h)
{
	unsigned int i = 0;
	dlistint_t *aux = *h;

	for (i  = 0; aux; i++)
	{
		aux = aux->next;
	}
	return (i);
}

/**
 * insert_dnodeint_at_index - agregar nodo en una posicion
 * @h: header de la dlinked
 * @idx: index donde vamos a insertar
 * @n: el dato
 * Return: NULL si falla, sino la direccion de mem del nuevo nodo
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux;
	unsigned int len = 0;

	len = lendlist(h);
	if ((idx != 0 && *h == NULL) || idx > len)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == len)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	aux = *h;
	for (; idx != 0; idx--)
		aux = aux->next;
	aux->prev->next = new;
	new->prev = aux->prev;
	new->next = aux;
	aux->prev = new;
	return (new);
}

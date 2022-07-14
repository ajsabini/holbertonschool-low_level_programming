#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - obtenemos numero de elemntos que tiene la dlinked
 * @h: el head de la lista
 * Return: el numero de elementos de la dlinked
 */

size_t dlistint_len(const dlistint_t *h)
{
	int cont = 0;

	while (h)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}

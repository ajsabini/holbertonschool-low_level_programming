#include <stddef.h>
#include "lists.h"

/**
 * listint_len - number of elements in a linked list_t
 * @h: head
 * Return: retorno
 */

size_t listint_len(const listint_t *h)
{
	size_t retorno = 0;

	for ( ; h; )
	{
		if (h->n)
			retorno++;
		h = h->next;
	}
	return (retorno);
}

#include <stddef.h>
#include "lists.h"
/**
 * list_len - number of elements in a linked list_t
 * @h: head
 * Return: retorno
 */
size_t list_len(const list_t *h)
{
	size_t retorno = 0;

	for ( ; h; )
	{
		if (h->str)
			retorno++;
		h = h->next;
	}
	return (retorno);
}

#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - imprime todos los elementos de una lista
 * @h: header
 * Return: el numero de elementos
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}

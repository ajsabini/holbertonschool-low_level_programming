#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint -  imprime los elementos de una lista
 * @h: lista
 * Return: ret
 */
size_t print_listint(const listint_t *h)
{
	int retorno = 0;

	for (; h;)
	{
		if (!h->n)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", h->n);
		}
		retorno = retorno + 1;
		h = h->next;
	}
	return (retorno);
}

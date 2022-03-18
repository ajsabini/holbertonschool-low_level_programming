#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list -  imprime los elementos de una lista
 * @h: lista
 * Return: ret
 */
size_t print_list(const list_t *h)
{
	int retorno = 0;

	for (; h;)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		retorno = retorno + 1;
		h = h->next;
	}
	return (retorno);
}

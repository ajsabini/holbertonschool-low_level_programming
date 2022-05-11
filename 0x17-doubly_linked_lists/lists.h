#ifndef double_list
#define double_list
#include <stddef.h>

/**
 * struct dlistint_s - es la doubly linked list
 * @n: numero entero
 * @prev: apunta al nodo anterior
 * @next: apunta al siguiente nodo
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif

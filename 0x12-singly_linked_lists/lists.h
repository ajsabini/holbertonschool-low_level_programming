#ifndef NODOS
#define NODOS
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct Node - struct
 * @str: string
 * @len: size
 * @next: next node
 */
typedef struct Node
{	char *str;
	int len;
	struct Node *next;
} list_t;
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif

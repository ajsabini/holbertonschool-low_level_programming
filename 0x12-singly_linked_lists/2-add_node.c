#include "lists.h"
/**
 * add_node - agregar nodo al iniio de la lista
 * @head: el nodo head
 * @str: string
 * Return: nuevoNodo
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s = NULL;
	list_t *newNode = NULL;

	s = strdup(str);

	if (s && head)
	{
		newNode = malloc(sizeof(list_t));

		newNode->str = s;
		newNode->len = strlen(s);
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}

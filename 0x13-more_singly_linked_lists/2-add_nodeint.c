#include "lists.h"

/**
 * add_nodeint - agregar nodo al inicio de la lista
 * @head: el nodo head
 * @n: int
 * Return: nuevoNodo
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	int s;
	listint_t *newNode = NULL;

	s = n;

	if (s && head)
	{
		newNode = malloc(sizeof(listint_t));

		if (newNode == NULL)
			return (NULL);

		newNode->n = s;
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}

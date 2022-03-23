#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a list
 *
 * @head: list's head
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	size_t sum = 0;

	if (head == NULL)
		return (sum);
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

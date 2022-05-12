#include "lists.h"

/**
 * sum_dlistint - suma todos los datos de la dlinked
 * @head: header de la dlinked
 * Return: el total de la suma
 */

int sum_dlistint(dlistint_t *head)
{
	int suma = 0;

	if (head)
	{
		while (head)
		{
			suma = head->n + suma;
			head = head->next;
		}
		return (suma);
	}
	else
	{
		return (0);
	}
}

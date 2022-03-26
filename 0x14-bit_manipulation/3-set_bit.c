#include "main.h"

/**
 * set_bit - setear bit 1, en un indice dado
 * @n: decimal
 * @index: indice
 * Return: -1 si da error, 1 si va bien
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 33)
		return (-1);

	i = 1 << index;

	*n = (*n) | i;
	return (1);
}

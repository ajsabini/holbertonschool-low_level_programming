#include "main.h"

/**
 * clear_bit - setear el valor e un bit, que nos pasan el indice, en 0
 * @n: decimal
 * @index: indice
 * Return: -1 si da error, 1 si va bien
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 33)
		return (-1);

	*n = (*n & ~(1 << index));
	return (1);
}

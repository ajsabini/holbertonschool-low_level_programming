#include "main.h"

/**
 * get_bit - nos dan un indice, devolvemos el valor de un bit
 * @n: numero que nos pasan
 * @index: el indice
 * Return: -1 si da error, el valor del bit en el indice
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 33)
		return (-1);

	if (!n)
		return (-1);

	i = (n & (1 << index));

	if (i == 0)
		return (0);
	else
		return (1);
}

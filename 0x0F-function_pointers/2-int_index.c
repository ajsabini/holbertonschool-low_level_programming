#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - busca un entero
 * @array: el array
 * @size: largo array
 * @cmp : ppuntero a funcion que compara
 * Return:0, -1, -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}

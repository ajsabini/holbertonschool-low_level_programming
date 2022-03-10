#include "function_pointers.h"

/**
 * array_iterator - recorrer el array y haer una accion p/c/ elemento
 * @array: el array a recorrer
 * @size: el largo del array
 * @action: la accion que van a haer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while (size--)
			action(*array++);
	}
}

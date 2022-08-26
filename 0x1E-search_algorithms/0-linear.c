#include "search_algos.h"

/**
 * linear_search - 
 * @array: pointer to the first element of array to search
 * @size: array length
 * @value: value to search
 * Return: first found, index of calue, -1 if is NULL o cant found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}

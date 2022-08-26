#include "search_algos.h"

/**
 * linear_search - searches value in an array of int with LSA
 * @array: pointer to the first element of array to search
 * @size: array length
 * @value: value to search
 * Return: first found, index of calue, -1 if is NULL o cant found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mitad = 0;

	if (array == NULL)
		return (-1);

	mitad = size /2;

	printf("Mitad: %ld %d", mitad, value);
	
	return (-1);
}

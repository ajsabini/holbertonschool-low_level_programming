#include "search_algos.h"

/**
 * binary_search - searches value in an array of int with BSA
 * @array: pointer to the first element of array to search
 * @size: array length
 * @value: value to search
 * Return: first found, index of calue, -1 if is NULL o cant found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mitad = 0, inicial = 0, i = 0;
	size_t final = size - 1;

	if (array == NULL)
		return (-1);

	while (inicial <= final)
	{
		printf("Searching in array: ");
		mitad = (final + inicial) / 2;
		i = inicial;

		for (; i <= final; i++)
		{
			if (i == final)
			{
				printf("%d", array[i]);
				break;
			}
			printf("%d, ", array[i]);
		}
		printf("\n");
		if (value == array[mitad])
		{
			return (value);
		}
		if (value < array[mitad])
		{
			final = mitad - 1;
		}
		else
		{
			inicial = mitad + 1;
		}
	}
	return (-1);
}

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
	size_t mitad, inicial, i = 0;
	size_t final = size - 1;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");

	while (inicial <= final)
	{
		printf("Searching in array: ");
		
		for (i = inicial; i <= final; i++)
		{
			if (i == final)
			{
				printf("%d, ", array[i]);
			}
		}

		printf("\n");

		mitad = ((final - inicial) / 2) + inicial;
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

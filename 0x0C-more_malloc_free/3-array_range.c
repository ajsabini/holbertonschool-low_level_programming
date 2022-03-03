#include <stddef.h>
#include <stdlib.h>
/**
 * *array_range - allocates memory for an array, using malloc
 * @min: elements
 * @max: bytes elements
 * Return: arreglo
*/
int *array_range(int min, int max)
{

	int *arreglo;
	int i = 0, k = 0;

	if (min > max)
	{
		return (NULL);
	}

	arreglo = malloc(sizeof(int) * max - min + 1);
	if (arreglo != NULL)
	{
		for (i = min; i <= max; i++)
			arreglo[k++] = i;
	}
	else
	{
		return (NULL);
	}

	return (arreglo);

}

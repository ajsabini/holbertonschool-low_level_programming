#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int **alloc_grid - imprimir un string seguido de una linea
 * @width: el string
 * @height: dafs
 * Return: void
 */

int **alloc_grid(int width, int height)
{
	int **doble;
	int i;
	int k;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	doble = (int **)malloc(width * sizeof(int *));

	if (doble == NULL)
	{
		free(doble);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		doble[i] = (int *)malloc(height * sizeof(int));

		if (doble[i] == NULL)
		{
			for (i = 0; doble[i]; i++)
			{
				free(doble[i]);
			}
			free(doble);
			return (NULL);
		}
	}

	for (i = 0; doble[i]; i++)
	{
		for (k = 0; doble[i][k]; k++)
		{
			doble[i][k] = 0;
		}
	}
	return (doble);
}

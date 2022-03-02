#include "main.h"
#include <stdlib.h>
#include <string.h>

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

	doble = (int **)malloc(width*sizeof(int*));/* this will store base order of all the row in p */
	for(i = 0; i < height; i++)
		doble[i] = (int *)malloc(height*sizeof(int));/* this will create m row of n elements */

	if (doble == NULL)
	{	
		free(doble);
		return (NULL);
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

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * char *create_array - imprimir un string seguido de una linea
 * @s: el string
 * Return - void
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;
	
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		while (1)
		{
			array = malloc(sizeof(char) * size);

			while (i <= size)
			{
				array[i] = c;
				i++;
			}
			return (array);
		}
	}
}

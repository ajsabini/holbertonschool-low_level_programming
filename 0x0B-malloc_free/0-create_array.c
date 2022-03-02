#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * char *create_array - imprimir un string seguido de una linea
 * @size: el largo
 * @c: el ccaracter
 * Return: void
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
			if (array == NULL)
			{
				return (NULL);
			}

			while (i <= size)
			{
				array[i] = c;
				i++;
			}
			return (array);
		}
	}
	return (NULL);
}

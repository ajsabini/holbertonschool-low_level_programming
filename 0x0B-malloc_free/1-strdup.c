#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * char *_strdup - imprimir un string seguido de una linea
 * @str: el string
 * Return: void
 */

char *_strdup(char *str)
{
	char *duplicado;
	int largo = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[largo] != '\0')
			largo++;

		while (1)
		{
			duplicado = malloc(sizeof(char) * largo + 1);
			if (duplicado == NULL)
			{
				return (NULL);
			}

			for (i = 0; i < largo && str[i] != '\0'; i++)
				duplicado[i] = str[i];
			for ( ; i < largo; i++)
				duplicado[i] = '\0';
			return (duplicado);
		}
	}
	return (NULL);
}

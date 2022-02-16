#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * string_toupperrray - da vuelta un string
 * @a: puntero que trae el array de enteros
 * @n: largo de array
 * Return: la copia
 */

char *string_toupper(char *c)
{
	size_t i;

	for (i = 0; i < strlen(c); i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] = c[i] - 32;
		}
	}

	return (c);
}

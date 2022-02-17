#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * leet - cambia letras por numeros
 * @c: puntero que trae el array de char
 * Return: el array cambiado
 */

char *rot13(char *c)
{
	int n;

	for (n = 0; c[n]; n++)
	{	
		if ((c[n] > 63 && c[n] < 91) && (c[n] > 96 && c[n] < 123))
		{
			c[n] = c[n] + 13;
		}
	}

	return (c);
}

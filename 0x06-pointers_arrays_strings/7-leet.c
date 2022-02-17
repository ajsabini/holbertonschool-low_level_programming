#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * leet - cambia letras por numeros
 * @c: puntero que trae el array de char
 * Return: el array cambiado
 */

char *leet(char *c)
{
	int n;
	int k;
	char letras[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int numeros[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};


	for (n = 0; c[n]; n++)
	{
		k = 0;
		while (letras[k])
		{
			if (c[n] == letras[k])
			{
				c[n] = numeros[k] + '0';
			}
			k++;
		}
	}

	return (c);
}

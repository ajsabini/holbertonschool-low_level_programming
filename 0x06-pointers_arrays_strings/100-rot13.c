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
	int k;
	char principio[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char final[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (n = 0; c[n]; n++)
	{
		k = 0;
		while (principio[k])
		{
			if (c[n] == principio[k])
			{
				c[n] = final[k];
			}
			k++;
		}
	}

	return (c);
}

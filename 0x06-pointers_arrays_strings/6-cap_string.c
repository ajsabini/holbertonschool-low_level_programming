#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * cap_string - da vuelta un string
 * @c: puntero que trae el array de enteros
 * Return: la copia
 */

char *cap_string(char *c)
{
	size_t i;
	int n;

	for (i = 0; i < strlen(c); i++)
	{
		if (c[i] == ',' || c[i] == ';' || c[i] == '.' || c[i] == '!' || c[i] == '?'
|| c[i] == '"' || c[i] == '(' || c[i] == ')' || c[i] == '{' ||
c[i] == '}' || c[i] == ' ' || c[i] == '\t' || c[i] == 10)
		{
			n = 0;
		}
		else
		{
			if (n == 0 && (c[i] > 96 && c[i] < 123))
			{
				c[i] = c[i] - 32;
			}
			n++;
		}

	}

	return (c);
}

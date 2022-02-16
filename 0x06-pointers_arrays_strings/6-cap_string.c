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

	for (i = 0; i < strlen(c); i++)
	{
		if (i == 0)
		{
			c[i] = c[i] - 32;
		}
		else
		{
			if (c[i - 1] == ',' || c[i - 1] == ';' || c[i - 1] == '.'
			|| c[i - 1] == '!' || c[i - 1] == '?' || c[i - 1] == '"'
			|| c[i - 1] == '(' || c[i - 1] == ')' || c[i - 1] == '{'
			|| c[i - 1] == '}' || c[i - 1] == ' ' || c[i - 1] == '\t' || c[i - 1] == 10)
					c[i] = c[i] - 1;
		}
	}
	return (c);
}

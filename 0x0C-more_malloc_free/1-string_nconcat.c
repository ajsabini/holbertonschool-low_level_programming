#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * char *string_nconcat - concatenar strings
 * @s1: el string 1
 * @s2: el string 2
 * @n: cant
 * Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenados;
	unsigned int largo1 = 0, largo2 = 0, j = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	largo1 = strlen(s1);
	largo2 = strlen(s2);

	if (n >= largo2)
		n = largo2;

	concatenados = malloc(largo1 + n + 1);

	if (concatenados != NULL)
	{
		for (i = 0; s1[i];i++)
			concatenados[i] = s1[i];
		for (j = 0; j < n; j++)
		{
			concatenados[i] = s2[j];
			i++;
		}
	}	
	return (concatenados);

}

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * char *str_concat - concatenar strings
 * @s1: el string 1
 * @s2: el string 2
 * Return: void
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenados;
	int largo1 = 0;
	int largo2 = 0;
	int i = 0;
	int k;

		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";

		while (s1[largo1] != '\0')
	        {
			largo1++;
		}

		while (s2[largo2] != '\0')
		{
			largo2++;
		}

		while (1)
		{
			concatenados = malloc(sizeof(char) * (largo1 + largo2 + 1));
			if (concatenados == NULL)
			{
				return (NULL);
			}

			for (i = 0; i < largo1 && s1[i] != '\0'; i++)
				concatenados[i] = s1[i];

			for (k = 0; k < largo2 && s2[k] != '\0'; k++)
			{
				concatenados[i] = s2[k];
				i++;
			}
			return (concatenados);
		}
	
	return (NULL);
}

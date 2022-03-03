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
	char *p = NULL;
	int i, t = 0;
	unsigned int j, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	(strlen(s2) > n) ? (k = n) : (k = strlen(s2));
	/** si el largo de s2 es mayor que n iguala k a n,*/
	/** si no iguala k al largo de s2 */
	p = malloc(strlen(s1) + k + 1);
	if (p != NULL)
	{
		for (i = 0; s1[i]; i++)
		{
			p[t++] = s1[i];
		}
		for (j = 0; j < k; j++)
		{
			p[t++] = s2[j];
			i++;
		}
		p[t] = '\0';
	}

	return (p);
}

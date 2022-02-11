#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - imprime al reves
 * @s: valor
 */

void rev_string(char *s)
{
	char *aux = s;
	char auxV[999];
	int i;
	int j = 0;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		auxV[j] = aux[i];
		j++;
	}

	j = 0;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		s[j] = auxV[j];
		j++;
	}

}

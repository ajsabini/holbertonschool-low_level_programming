#include "main.h"
#include <stdio.h>

/**
 * _strspn - encontrar caracter
 * @s: puntero con string
 * @accept: caracter a encontrar
 * Return: total
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;
	int n = 0;

	for (i = 0; accept[i]; i++)
	{
		for (k = 0; s[k]; k++)
		{
			if (s[k] == 44)
				break;

			if (accept[i] == s[k])
			{
				n++;
			}
		}
	}

	return (n);
}

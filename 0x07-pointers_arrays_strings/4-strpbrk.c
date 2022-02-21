#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - encontrar caracter
 * @s: puntero con string
 * @accept: caracter a encontrar
 * Return: total
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int k;
	char *p = NULL;

	for (i = 0; s[i]; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
			{
				p = s + i;
				return (p);
			}
		}
	}

	return (p);
}

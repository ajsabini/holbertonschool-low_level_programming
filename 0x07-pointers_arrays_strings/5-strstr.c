#include "main.h"
#include <stdio.h>

/**
 * _strstr - encontrar caracter
 * @s: puntero con string
 * @accept: caracter a encontrar
 * Return: total
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int k;
	char *p = NULL;

	for (i = 0; needle[i]; i++)
	{
		for (k = 0; haystack[k]; k++)
		{
			if (haystack[k] == needle[i])
			{
				p = haystack + k;
				return (p);
			}
		}
	}

	return (p);
}
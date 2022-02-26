#include "main.h"
#include <stdio.h>

/**
 * _strchr - encontrar caracter
 * @s: puntero con string
 * @c: caracter a encontrar
 * Return: pos
 */

char *_strchr(char *s, char c)
{
	int y = 0;
	int si = 0;
	char *p = NULL;

	p = s;

	if (s != NULL)
	{
		for (; s[si]; si++)
		{
			if (s[si] == c)
			{
				y = 1;
				break;
			}
		}
	}

	if (y || c == 0)
		p = s + si;
	else
		p = NULL;

	return (p);
}

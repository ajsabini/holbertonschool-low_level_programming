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
	int i = 0;
	int si = 0;
	char *pos = s;

	while (s[i])
	{
		if (s[i] == c)
		{
			pos = s + i;
			si = 1;
			break;
		}
		i++;
	}
	if (si == 0 || c == 0)
	{
		pos = s + i;
	}

	return (pos);
}

#include "main.h"

/**
 * _strdup - copia un string con malloc
 * @str: string a copiar
 * Return: retorna la copia
 */
char *_strdup(char *str)
{
	int i = 0;
	char *copiado = NULL;

	if (str != NULL)
	{
		copiado = (char *)malloc(_strlen(str) + 1);
		if (str != NULL)
		{
		for (i = 0; str[i]; i++)
		{
			copiado[i] = str[i];
		}
		}

	}

	return (copiado);
}

/**
 * _strlen - obtener el largo de un string
 * @s: el string
 * Return: el largo del string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcmp - compara strings
 * @s1: primer string
 * @s2: segundo string
 * Return: la copia
 */

int _strcmp(char *s1, char *s2)
{
	int i, ss1 = 0, ss2 = 0, result = 0;

	for (i = 0; i > -1; i++)
	{
		if (s1[i] != s2[i])
		{
			ss1 = s1[i];
			ss2 = s2[i];
			break;
		}
		else
		{
			if (s1[i] == '\0' || s2[i] == '\0')
				break;
		}
	}
	result = ss1 - ss2;
	return (result);
}

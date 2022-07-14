#include "main.h"

/**
 * _strlen - obtener el largo de un string
 * @s: el string
 * Return: el largo
 */

int _strlen(char *s)
{
	int len = 0;
	while (s[len] != '\0')
	len++;
	return (len);
}

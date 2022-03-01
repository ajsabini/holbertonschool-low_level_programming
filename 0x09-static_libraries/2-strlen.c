#include "main.h"

/**
 * _strlen - devuelve el largo
 * @s: pointer
 * Return: ret
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	
	return (i);
}

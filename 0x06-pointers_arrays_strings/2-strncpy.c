#include "main.h"
#include <string.h>

/**
 * _strncpy - imprime la diagonal
 * @dest: valor
 * @src: segundo valor
 * @n: la cantidad de caracteres
 * Return: la copia
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);

}

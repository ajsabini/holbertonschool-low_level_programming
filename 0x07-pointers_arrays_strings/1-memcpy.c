#include "main.h"
#include <string.h>

/**
 * _memcpy - imprime la diagonal
 * @dest: el array copiado
 * @src: el array a copiar
 * @n: valor
 * Return: la copia
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}

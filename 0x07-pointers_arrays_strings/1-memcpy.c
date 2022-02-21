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
	unsigned int i = 0;

	while (i < n)
	{
		*dest++ = src[i];
		i++;
	}
	return (dest);
}

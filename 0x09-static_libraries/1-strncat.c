#include "main.h"
#include <string.h>

/**
 * _strncat - imprime la diagonal
 * @dest: valor
 * @src: segundo valor
 * @n: cantidad de caracteres
 * Return: la copia
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
	/*return (strncat(dest, src, n));*/
}

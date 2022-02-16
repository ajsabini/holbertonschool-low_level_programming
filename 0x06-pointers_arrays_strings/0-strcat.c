#include "main.h"
#include <string.h>

/**
 * _strcat - imprime la diagonal
 * @dest: valor
 * @src: segundo valor
 * Return: la copia
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
	/*return (strcat(dest, src));*/
}

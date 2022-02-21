#include "main.h"
#include <string.h>

/**
 * _strcat - imprime la diagonal
 * @dest: valor
 * @src: segundo valor
 * Return: la copia
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	while (n-- > 0)
		*ptr++ = b;
	return s;

}

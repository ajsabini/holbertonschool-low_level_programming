nclude "main.h"
#include <string.h>

/**
 * _memset - imprime la diagonal
 * @s: valor
 * @b: segundo valor
 * @n: valor
 * Return: la copia
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;

	return (s);

}

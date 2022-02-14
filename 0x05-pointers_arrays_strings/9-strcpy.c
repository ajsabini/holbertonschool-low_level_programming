#include "main.h"

/**
 *_strcpy - copiar un string inluyendo el null
 *
 * @dest: donde guardamos el array que vamos a copiar
 * @src: el array a opiar
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int pos = 0;

	if (dest && src)
	{
		while (*(src + len))
			++len;

		if (src + len < dest || dest + len < src)
		{
			do {
				*(dest + pos++) = *src++;
			} while (len--);
		}
	}

	return (dest);
}

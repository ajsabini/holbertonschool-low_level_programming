#include "main.h"
#include <string.h>

/**
 * *_strcat - qwe
 * @dest: qwe
 * @src: qwe
 * Return: qwe
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int length = 0;
	
	while (dest[length] != '\0')
		length++;

	for (i = 0; src[i] != '\0'; length++)
		dest[length] = sr[i];

	return (dest);

}

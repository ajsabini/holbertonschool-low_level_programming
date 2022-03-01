#include "main.h"

/**
 *_strlen - qwe
 *@s: qwe
 *Return: qwe
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}

/**
 *_strcpy - qwe
 *@dest: qwe
 *@src: qwe
 *Return: qwe
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);

}

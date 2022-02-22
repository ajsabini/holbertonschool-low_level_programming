#include "main.h"
#include <stdio.h>

/**
 * _strstr - encontrar un string en una cadena
 * @haystack: la cadena
 * @needle: el string
 * Return: NULL si no encuentra o lo que coincide
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0;
int k = 0;

while (haystack[i] != '\0')
{
	while (needle[k] != '\0')
	{
		if (haystack[i + k] != needle[k])
		{
			break;
		}
		k++;
	}
	if (needle[k] == '\0')
	{
		return (haystack + i);
	}
	i++;
}
return ('\0');
}

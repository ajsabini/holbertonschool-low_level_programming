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
        int i;
        int k = 0;

        for (; needle[k] ;)
                k++;

        for (; haystack != NULL;)
        {
                for (i = 0; needle[i]; i++)
                {
                        if (haystack[i] != needle[i])
                                break;
                }
                if (i != k)
                        haystack++;
                else
                        return (haystack);
        }
        return (NULL);
}

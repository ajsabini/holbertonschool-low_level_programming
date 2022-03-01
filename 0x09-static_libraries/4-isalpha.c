#include "main.h"

/**
 * _isalpha - devuelve si es letra
 * @c: pointer
 * Return: ret
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' <= 'Z'))
		return (1);
	else
        	return (0);
}

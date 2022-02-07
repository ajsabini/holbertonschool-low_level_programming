#include <stdio.h>
#include "main.h"

/**
 * _isalpha - comprobar si es letra
 * @c: el numero a chequear
 * Return: 1 si es true
 */

int _isalpha(int c)
{
	if ((c > 'a' && c <= 'z') || (c > 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}


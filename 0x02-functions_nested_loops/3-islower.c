#include <stdio.h>
#include "main.h"

/**
 * _islower - comprobar si es minuscula
 * @c: el numero a chequear
 * Return: 1 si es true
 */

int _islower(int c)
{
	if (c > 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}


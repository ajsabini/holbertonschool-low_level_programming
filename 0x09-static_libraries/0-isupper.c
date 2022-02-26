#include <ctype.h>
#include "main.h"

/**
 * _isupper - si es mayuscula
 * @c: pasa el numero a evaluar
 * Return: si es mayuscula 1, sino 0
 */


int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);

}


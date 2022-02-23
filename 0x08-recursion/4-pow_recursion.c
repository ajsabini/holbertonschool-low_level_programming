#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _pow_recursion - devolver la potencia
 * @x: elevado a
 * @y: elevar
 * Return: devuelve el resultado
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

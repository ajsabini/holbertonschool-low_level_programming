#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - imprimir un string seguido de una linea
 * @s: el string
 * Return: el largo del string
 */

int factorial(int n)
{
	if(n == 0) {
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return n * factorial(n - 1);
	}
}

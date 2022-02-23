#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * factorial - devolver el factorial de un numero
 * @n: el entero
 * Return: el factorial de n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

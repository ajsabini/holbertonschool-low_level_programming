#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_prime_number - chequear si es un numero primo
 * @n: el numero a evaluar
 * Return: 1 si es primo, 0 si no
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % 2 == 0)
	{
		if (n == 2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		
	}
}

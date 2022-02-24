#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * __prime - enontrar numero primo
 * @n: entero
 * @k: entero
 * Return: el primo
 */

int __prime(int n, int k)
{
	if (k == 1)
		return (1);
	else if ((n % k) == 0)
		return (0);
	else
		return (__prime(n, k - 1));
}


/**
 * is_prime_number - saber si es numero primo
 * @n: el numero a evaluar
 * Return: 1 si es primo, 0 si no es
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (__prime(n, n - 1));
	else
		return (0);
}

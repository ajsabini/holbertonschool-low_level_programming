#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * __sqrt - encontrar la raiz cuadrada
 * @n: int
 * @k: int
 * Return: la raiz cuadrada
 */

int __sqrt(int n, int k)
{
	if (k * k == n)
	{
		return (k);
	}

	if (k * k > n)
	{
		return (-1);
	}

	return (__sqrt(n, k + 1));
}

/**
 * _sqrt_recursion - encontrar raiz cuadrada con recursion
 * @n: el numero al que hay que encontrarle la raiz cuadrada
 * Return: la raiz cuadrada
 */

int _sqrt_recursion(int n)
{
	return (__sqrt(n, 1));
}

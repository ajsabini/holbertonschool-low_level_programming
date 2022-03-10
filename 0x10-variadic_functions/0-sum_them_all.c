#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - suma todos los parametros
 * @n: numeros
 * Return: la suma de todos los parametros
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numeros;
	unsigned int i;
	int suma;

	va_start(numeros, n);

	if (n == 0)
		return (0);

	suma = 0;
	for (i = 0; i < n; i++)
		suma += va_arg(numeros, int);

	va_end(numeros);
	return (suma);
}

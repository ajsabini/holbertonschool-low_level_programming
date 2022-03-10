#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - imprime los numero
 * @separator: cadena de texto que separa los numeros
 * @n: cantidad de numeros
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list listanumeros;
	unsigned int i;

	va_start(listanumeros, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(listanumeros, int));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		i++;
	}

	va_end(listanumeros);

	printf("\n");
}

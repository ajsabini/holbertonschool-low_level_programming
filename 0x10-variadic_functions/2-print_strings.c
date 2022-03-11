#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - imprime cadanas
 * @separator: cadena separadora
 * @n: cantidad de cadenas
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list listacadenas;
	unsigned int i = 0;
	char *cad;

	va_start(listacadenas, n);

	while (i < n)
	{
		cad = va_arg(listacadenas, char*);

		if (cad == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
			printf("%s", cad);
		}

		if (separator != NULL && i != n - 1)
			printf("%s", separator);

		i++;
	}

	va_end(listacadenas);

	printf("\n");
}

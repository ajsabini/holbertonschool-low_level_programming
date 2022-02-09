#include "main.h"
#include <stdio.h>

/**
 * print_line - imprime _ n veces
 * @n: un entero
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}

	putchar('\n');
}

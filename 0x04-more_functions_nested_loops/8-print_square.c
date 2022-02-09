#include "main.h"
#include <stdio.h>

/**
 * print_line - imprime _ n veces
 * @n: un entero
 */

void print_square(int n)
{
	int i;
	int c;

	for (c = 1; c <= n; c++)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('#');
		}

		if (c == n)
		{
		}
		else
		{
			_putchar('\n');
		}

	}

	_putchar('\n');
}

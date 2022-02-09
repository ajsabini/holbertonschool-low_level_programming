#include "main.h"
#include <stdio.h>

/**
 * print_triangle - imprime la diagonal
 * @n: valor
 */

void print_triangle(int n)
{
	int a;
	int b;

	for (a = 1; a <= n; ++a)
	{
		for (b = n; b > a; --b)
			_putchar(' ');
		for ( ; b > 0; --b)
			_putchar('#');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');

}

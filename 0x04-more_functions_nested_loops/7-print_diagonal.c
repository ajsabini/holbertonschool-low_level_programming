#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - imprime la diagonal
 * @n: valor
 */

void print_diagonal(int n)
{
	int esp;
	int bsl;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (bsl = 1; bsl <= n; bsl++)
		{
			_putchar('\\');
			_putchar('\n');

			if (bsl < n)
			{

				for (esp = 1; esp <= bsl; esp++)
					_putchar(' ');

			}
		}
	}

}

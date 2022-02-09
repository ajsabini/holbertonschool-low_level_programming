#include "main.h"
#include <stdio.h>

/**
 * more_numbers - imprime del 0 al 9
 */

void more_numbers(void)
{
	int i;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i < 15; i++)
		{

			if (i > 9)
				_putchar('0' + (i / 10));

			_putchar('0' + (i % 10));
		}
		_putchar('\n');
	}
}

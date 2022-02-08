#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * times_table - pasar a valor absoluto
 */

void times_table(void)
{
	int primero;
	int segundo;
	int producto;

	for (primero = 0; primero <= 9; primero++)
	{
		for (segundo = 0; segundo <= 9; segundo++)
		{
			producto = (primero * segundo);
			if (segundo == 0)
			{
				_putchar('0' + producto);
			}
			else if (producto <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + producto);
			}
			else if (producto > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (producto / 10));
				_putchar('0' + (producto % 10));
			}
		}
		_putchar('\n');
	}
}

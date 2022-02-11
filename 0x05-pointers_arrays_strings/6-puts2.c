#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - imprime la diagonal
 * @str: valor
 */

void puts2(char *str)
{
	if (str)
	{
		while (*str)
		{
			putchar(*str++);
			str++;
		}
	}
	putchar('\n');
}

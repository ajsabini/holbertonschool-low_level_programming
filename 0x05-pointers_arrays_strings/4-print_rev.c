#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - imprime al reves
 * @s: valor
*/

void print_rev(char *s)
{
	int i;

	i = strlen(s) - 1;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;

	}

	putchar('\n');

}

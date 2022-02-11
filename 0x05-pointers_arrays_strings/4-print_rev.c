#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - imprime la diagonal
 * @s: valor
 */

void print_rev(char *s)
{
	/*char *inv;*/

	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		/*printf("%c", s[i]);*/
		putchar(s[i]);
	}

	/*puts(inv);*/
}

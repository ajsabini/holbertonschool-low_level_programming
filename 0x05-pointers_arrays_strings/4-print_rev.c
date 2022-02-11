#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - imprime al reves
 * @s: valor
 */

void print_rev(char *s)
{
	char *t = s;

	if (s)
	{
		while (*t)
		++t;	
		while (s < t--)
			putchar(*t);
		
		putchar('\n');
	}	
}

#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - imprimir un string seguido de una linea
 * @s: el string
 * Return - void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

#include "main.h"
#include <stdio.h>

/** 
 * puts_half - imprim la segunda mitad de la cadena
 * @str: lo que nos pasan como parametro
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;

	if (str)
	{
		for (len = 0; *(str + len); ++len)
			;
		for (str += (len + 1) / 2; *str; ++str)
			putchar(*str);
		putchar('\n');
	}
}

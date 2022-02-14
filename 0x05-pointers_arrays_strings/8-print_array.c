#include "main.h"
#include <stdio.h>

/**
 * puts_half - imprim la segunda mitad de la cadena
 * @str: lo que nos pasan como parametro
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == n)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}

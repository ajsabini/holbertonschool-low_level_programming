#include "main.h"
#include <stdio.h>

/**
 * print_array - imprim la segunda mitad de la cadena
 * @a: lo que nos pasan como parametro
 * @n: f,ldsk
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n -1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}

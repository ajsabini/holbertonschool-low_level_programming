#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_array - da vuelta un string
 * @a: puntero que trae el array de enteros
 * @n: largo de array
 * Return: la copia
 */

void reverse_array(int *a, int n)
{
	int x;
	int temporal;
	
	for (x = 0; x < n / 2; x++)
	{
		temporal = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = temporal;
	}
}

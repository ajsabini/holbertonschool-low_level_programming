#include "main.h"
#include <string.h>

/**
 * reverse_array - da vuelta un string
 * @a: puntero que trae el array de enteros
 * @n: largo de array
 * Return: la copia
 */

void reverse_array(int *a, int n)
{
	int i;
	int aux[1024];

	for (i = 0; i < strlen(*a); i++)
	{
		aux[i] = a[n];
		n--;
	}
}

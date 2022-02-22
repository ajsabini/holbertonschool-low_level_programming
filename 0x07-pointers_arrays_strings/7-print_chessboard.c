#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - imprime el tablero
 * @a: puntero de har
 * Return - -
 */

void print_chessboard(char (*a)[8])
{
	int i, k;

	for (i = 0; i < 8; i++)
	{
		for (k = 0; k < 8; k++)
		{
				printf("%s", a[k]);
		}
		printf("\n");
	}
}

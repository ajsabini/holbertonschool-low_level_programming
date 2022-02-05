#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - funcion para imprimir del 0 al 9 on while
 * Return: 0, hacemos un printf de ada iteracion
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar((n % 10) + '0');
		n++;
	}
	putchar('\n');

	return (0);
}

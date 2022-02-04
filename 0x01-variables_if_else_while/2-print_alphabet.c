#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - funcion para imprimir de la a la z en minusula
 * Return: 0, hacemos un printf para imprimir letra a letra
*/

int main(void)
{
	int a;
	for (a = 'a'; a >= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

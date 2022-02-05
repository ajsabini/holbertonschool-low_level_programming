#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - funcion para imprimir de la a la z en minusula
 * Return: 0, hacemos un printf para imprimir letra a letra
*/

int main(void)
{
	int n;
	char a;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}

	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

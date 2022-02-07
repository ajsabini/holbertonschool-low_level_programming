#include <unistd.h>
#include "main.h"

/**
 * main - imprimir _putchar
 * Return: siempre 0
 */

int main(void)
{
	char cadena[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int tamanio = sizeof(cadena);
	int i;

	for (i = 0; i < tamanio; i++)
	_putchar(cadena[i]);

	_putchar('\n');

	return (0);
}

#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - imprimir a-z
 * Return: siempre 0
 */


void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	_putchar(a);

}

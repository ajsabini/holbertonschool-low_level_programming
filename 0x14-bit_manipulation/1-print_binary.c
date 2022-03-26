#include "main.h"

/**
 * print_binary - imprimir el binario de un numero
 * @n: numero que pasan
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + 48);
}

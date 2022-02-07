#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - pasar a valor absoluto
 * @n: el numero a chequear
 * Return: 0 siempre
 */

int print_last_digit(long int n)
{
	if (n < 0)
		n *= -1;

	_putchar('0' + (n % 10));

	return (n % 10);

}

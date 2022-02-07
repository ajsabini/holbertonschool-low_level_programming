#include <stdio.h>
#include "main.h"

/**
 * print_sign - comprobar le numero a chequear
 * @n: el numero a chequear
 * Return: 1 si es true
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}

#include <unistd.h>

/**
 * _putchar - escribe el caracter en stdout
 * @c: caracter a imprimir
 * Return: 1 si imprime, -1 si da error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

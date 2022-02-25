#include <stdio.h>

/**
 * main - imprimir el nombre despues de una linea
 * @argc: int
 * @argv: char
 * Return: int
 *
 */

int main(int argc __attribute__((__unused__)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}

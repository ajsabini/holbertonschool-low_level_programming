#include <stdio.h>

/**
 * main  -imprimir el numero de argunmentos
 * @argc: int
 * @argv: char
 * Return: Siempre 0.
 */

int main(int argc, char **argv __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}

#include <stdio.h>

/**
 * main - imprime los argumentos que recibe
 * @argc: int
 * @argv: char
 * Return: Siempre 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

#include <stdio.h>
#include "_putchar.c"

/**
 * print_alphabet_x10 - imprime de la a la z 10 veces
 */

void print_alphabet_x10(void)
{
	char a;

	int n;

	for (n = 0; n < 10; n++)
	{

		for (a = 'a'; a <= 'z'; a++)
		_putchar(a);

		_putchar('\n');

	}
}

/**
* main - algo
* Return: siempre 0
*/

int main(void)
{
	print_alphabet_x10();
	return (0);
}

#include <unistd.h>
#include "main.h"

/**
 *  * main - imprimir _putchar
 *   * Return: siempre 0
 *    */


void print_alphabet()
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);

}

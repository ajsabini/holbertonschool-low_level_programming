#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * char *malloc_checked - imprimir un string seguido de una linea
 * @b: el string
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ret;

	ret = malloc(b);
	if (ret)
		return (ret);
	exit(98);
}

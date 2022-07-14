#include "main.h"

/**
 * check_slash - chequea / para saber si es directorio
 * @buffer: lo que se ingreso
 * Return - si encontro / devuelve 1, sino 0
*/

int check_slash(char *buffer)
{
	int i = 0;
	
	for (i = 0; buffer[i]; i++)
	{
		if (buffer[i] == '/')
			return (1);
	}
	return (0);
}

/**
 * check_space - chequea si hay espacios
 * @buffer: reibe lo que se ingreso
 * Return - 1 si hay algun arater distinto a espacio, sino 0
 */
int check_space(char *buffer)
{
	int i = 0;

	for (i = 0; buffer[i]; i++)
	{
		if (buffer[i] != ' ')
			return (1);
	}
	return (0);
}

/**
 * check_built - chequea si es una built-in, env o exit
 * @buffer: recibimos lo que escribieron
 * Return - 0 o 1
 */

int check_built(char *buffer)
{
	int status = 0, i = 0;

	status = _env(buffer);
	if (status == 1)
	{
		for (i = 0; environ[i]; i++)
			printf("%s\n", environ[i]);
	}
	else
	{
		status = 0;
		status = _fexit(buffer);
		if (status == 1)
			return (1);
	}
	return (0);

}

/**
 * change_tabs - as
 * @buffer: as
 * Return - void
 */

void change_tabs(char *buffer)
{
	int i = 0;

	for (i = 0; buffer[i]; i++)
	{
			if (buffer[i] == '	')
			{
						buffer[i] = ' ';
					}
		}
}


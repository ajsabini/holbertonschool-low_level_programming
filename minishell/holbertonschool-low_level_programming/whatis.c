#include "main.h"

/**
 * check_directory - chequea si existe el directorio
 * @input: string a evaluar
 * Return - lo que nos devuelve command
 */

int check_directory(tokeniza *input)
{
	int stat = 0, file = 0, status = 0;
	char *path_concat = NULL;

	stat = get_stat(input->s);
	if (stat != 0)
		dprintf(2, "No es un archivo ni un directorio\n");
	else
	{
		file = regular_file(input->s);
		if (file == 0)
			dprintf(2, "Es un directorio\n");
		else
		{
			path_concat = input->s;
			status = command(input, path_concat);
		}
	}
	return (status);
}

/**
 * check_files - chequea si puede ejecutar el comando
 * @directorys: los directorios
 * @input: el token
 * Return - lo que nos da command
*/
int check_files( *directorys, tokeniza *input)
{
	char *path_concat = NULL;
	int status = 0;

	path_concat =_concat(directorys, input);
	if (strcmp(path_concat, "ERROR") == 0)
		dprintf(2, "Comando no encontrado\n");
	else
	{
			status = command(input, path_concat);
			free(path_concat);
		}
	return (status);
}

/*
 * regular_file - as
 * @path: as
 * Return - as
 */

int regular_file(char *path)
{
	struct stat path_stat;
	stat(path, &path_stat);
	return S_ISREG(path_stat.st_mode);
}


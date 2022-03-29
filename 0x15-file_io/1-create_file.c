#include "main.h"

/**
 * create_file - crea archivo
 * @filename: nombre del archivo
 * @text_content: contenido del archivo
 * Return: 1 si va bien, -1 si falla
 */

int create_file(const char *filename, char *text_content)
{
	int openf = 0;
	int	cant = 0;
	int writef = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		close(openf);
		return (1);
	}

	openf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (openf == -1)
		return (-1);
	
	cant = strlen(text_content);
	writef = write(openf, text_content, cant);

	if (writef == -1)
	{
		close(openf);
		return (-1);
	}
	close(openf);
	return (1);
}

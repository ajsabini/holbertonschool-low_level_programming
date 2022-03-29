#include "main.h"

/**
 * append_text_to_file - agregar texto al final de un archivo
 * @text_content: texto
 * @filename: nombre de arhivo
 * Return: devuelve 1 si va bien, sino 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int openf = 0;
	int cant = 0;

	if (filename == NULL)
		return (-1);

	openf = open(filename, O_RDWR | O_APPEND, 0600);
	if (openf == -1)
	{
		close(openf);
		return (-1);
	}

	if (text_content == NULL)
	{
		close(openf);
		return (1);
	}

	cant = strlen(text_content);
	write(openf, text_content, cant);
	close(openf);
	return (1);
}

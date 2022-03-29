#include "main.h"

/**
 * read_textfile - leer un archivo
 * @filename: el nombre de archivo
 * @letters: el numero de letras
 * Return: si nombre es nulo, devuielve 0, son no lo puede abrir o leer 0, si falla write o, sino devuelve el numero actual de letras que lee e imprime
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int openf = 0;
	char *buffer;
	ssize_t readf = 0;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);	
	if (!buffer)
		return (0);

	openf = open(filename, O_RDONLY);
	if (openf == -1)
		return (0);

	readf = read(openf, buffer, letters);
	close(openf);
	write(STDOUT_FILENO, buffer, readf);
	free(buffer);

	return (readf);
}

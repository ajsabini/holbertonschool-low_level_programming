#include "main.h"

/**
 * _concat - as 
 * @dir: as
 * @input: as
 */

char *_concat(tokeniza *dir, tokeniza *input)
{
	char *path_concat = NULL;
	int i = 0, j = 0, get = 0;

	for (j = 0; input->s[j]; j++)
		;

	while (dir)
	{

		for (i = 0; dir->s[i]; i++)
			;

		path_concat = malloc(i + j + 2);
		if (!path_concat)
			return ("Comando no encontrado");

		for (i = 0; dir->s[i]; i++)
		{
			path_concat[i] = dir->s[i];
		}
		path_concat[i] = '/';
		i++;
		for (j = 0; input->s[j]; j++)
		{
			path_concat[i] = input->s[j];
			i++;
		}
		path_concat[i] = '\0';

		get = get_stat(path_concat);

		if (get == 0)
    	{
			return (path_concat);
    	}
   			else
    	{
			free(path_concat);
   		}
		dir = dir->next;
	}
	return ("ERROR");
}

/**
 * get_stat - as
 * @path_concat: as
 * Return - entero
 */

int get_stat(char *path_concat)
{
	struct stat st;

	return (stat(path_concat, &st));
}

#include "main.h"

/**
 * get_pwd - obtenemos del envirom el directorio actual
 * Return: 
 */

char *get_pwd()
{
	char *copy = NULL;
    char *pathcompare = "PWD=";
    int i = 0;

    for (i = 0; environ[i]; i++)
    {
		if (strncmp(environ[i], pathcompare, 4) == 0)
		{
			copy = strdup(environ[i]);
			return (copy);
		}
	}
	copy = strdup(environ[i]);
    return (copy);
}

/**
 * get_oldpwd - obtenemos, del envirom, el path del directorio que estuvimos antes
 * Return: copia del directorio anterior
 */
char *get_oldpwd()
{
	char *copy = NULL;
    char *pathcompare = "OLDPWD=";
    int i = 0;

    for (i = 0; environ[i]; i++)
    {
		if (strncmp(environ[i], pathcompare, 7) == 0)
		{
			copy = strdup(environ[i]);
    		return (copy);
		}
	}
	copy = strdup(environ[i]);
	return (copy);
}

/**
 * get_path - obtenemos el path del environ
 * Return: la copia del path del environ
 */
char *get_path()
{
	char *copy = NULL;
	char *pathcompare = "PATH=";
	int i = 0;

	for (i = 0; environ[i]; i++)
	{
			if (strncmp(environ[i], pathcompare, 5) == 0)
			{
				copy = strdup(environ[i]);
				return(copy);
			}
	}
	copy = strdup(environ[i]);
	return (copy);
}

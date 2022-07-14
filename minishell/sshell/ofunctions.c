#include "main.h"

/* commannd - as
 * @head: primer nodo
 * @path_concat: as
 * Return - as
 */

int command(tokeniza *head, char *path_concat)
{
	pid_t pid = 0;
	int i = 0, status = 0;
	tokeniza *aux = NULL;
	char **arg = NULL;
	
	aux = head;
	for (i = 0; aux; i++)
	{
		aux = aux->next;
	}
	i++;
	arg = malloc(i * sizeof(char *));
	if (!arg)
	{
		perror("MY-SHELL");
		exit(98);
	}
	aux = head;
	for (i = 0; aux; i++)
	{
		arg[i] = aux->s;
		aux = aux->next;
	}
	arg[i] = NULL;

	pid = fork();	
	if (pid == -1)
		perror("MY-SHELL");
	if (pid == 0)
	{
		execve(path_concat, arg, NULL);
	}
	else
	{
		wait(&status);
	}
	free(arg);
	return (WEXITSTATUS(status));
}

/**
 * _fsignal - captura la senial ctrl+c
 * @sig: la senial
 * Return - void
 */

void _fsignal(int sig)
{
	if (SIGINT == sig)
	{
		dprintf(STDIN_FILENO, "\nOSHELL: ");
	}
}

/**
 * _fexit - captura el exit y lo ejecuta
 * @buffer: lo que se ingreso
 * Return - int
 */

int _fexit(char *buffer)
{
	char *exit = "exit";
	int i = 0, j = 0;

	for (i = 0; buffer[i]; i++)
	{
		if (buffer[i] == ' ')
				;
		else
		{
			if (buffer[i] == exit[j])
			{	
				while (j < 5)
				{
					if (j == 4)
					{
						while (j < 5)
						{
							i++;
							if (buffer[i] == '\0')
								return (1);
							if (buffer[i] != ' ')
								return(0);
						}
					}
					if (buffer[i] == exit[j])
					{
						i++;
						j++;
					}
					else
						return (0);
				}
			}
			else
				return (0);
		}		
	}
	return (0);	
}

/**
 * cpy_eniron - copiamos el environ
 * Return - la copia del 
 */

char **cpy_environ()
{
	int i = 0;
	char **envir;

	for (i = 0; environ[i]; i++)
	;
	
	envir = malloc(i * (sizeof(char *)));

	for (i = 0; environ[i]; i++)
	{
		envir[i] = strdup(environ[i]);
	}
	envir[i] = NULL;
	return (envir);
}

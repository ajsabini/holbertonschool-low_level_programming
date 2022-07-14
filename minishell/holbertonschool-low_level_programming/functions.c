#include "main.h"

/* commannd - as
 * @head: primer nodo
 * @path_concat: as
 * Return - as
 */

int command(list_t *head, char *path_concat)
{
	pid_t pid = 0;
	int i = 0, status = 0;
	list_t *aux = NULL;
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
 * getpath - obtiene el path del environ
 * Return: environ
 */

char *getpath()
{
	extern char **environ;
	char *pathcompare = "PATH=";
	int i = 0, j = 0;

	for (i = 0; environ[i]; i++)
	{
		for (j = 0; pathcompare[j]; j++)
		{
			if (*(environ[i]) == pathcompare[j])
			{
				environ[i]++;
			}
			else
				break;
		}
		if (j == 5)
		{
			break;
		}
	}
	return (environ[i]);
}

/**
 * _signal - captura la senial ctrl+c
 * @sig: la senial
 * Return - void
 */

void _signal(int sig)
{
	if (SIGINT == sig)
	{
		dprintf(STDIN_FILENO, "\nMY-SHELL: ");
	}
}

/**
 * _exit - captura el exit y lo ejecuta
 * @buffer: lo que se ingreso
 * Return - int
 */

int _exit(char *buffer)
{
	char *exit = "exit";
	int i = 0, j = 0;

	for (i = 0; buffer[i]; i++)
	{
		if (buffer[i] == exit[j])
		{
			j++;
			if (j == 4)
			{
				while (buffer[i])
				{
					i++;	
					if (buffer[i] != ' ')
					return (0);
				}
			}
		}
		
	}
	return (1);
}


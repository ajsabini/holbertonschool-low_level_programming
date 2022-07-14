#include "main.h"

/**
 * add_node - agrega un token
 * @head: pasamos la direccion del head y lo recibe como doble puntero
 * @s: el token
 * Return: void
 */

void add_node(tokeniza **head, char *s)
{
	tokeniza *headaux = *head;
	tokeniza *new;

	if (s == NULL)
		dprintf(1, "error al crear la lista\n");
	else
	{
		new = malloc(sizeof(tokeniza));
		if (new == NULL)
		{
			dprintf(1, "error al crear la lisa\n");
		}
		else
		{
			new->s = strdup(s);
			new->next = NULL;

			if (s && *head)
			{
				for (; headaux->next;)
				{
					headaux = headaux->next;
				}
				new->next = NULL;
				headaux->next = new;
			}
			else
			{
				*head = new;
			}
		}
	}
}

/**
 * tokenizer - se encarga de tokenizar
 * @env: dsdf
 * @directorys: asd
 * @delim: el delimitador para tokenizar
 */

void tokenizer(char *env, tokeniza **directorys, const char *delim)
{
	char *path = NULL;

	path = strtok(env, delim);
	while (path != NULL)
	{
		add_node(directorys, path);
		path = strtok(NULL, delim);
	}
}

/**
 * free_nodes - liberamos la lista
 * @head: primer nodo
 * Return: void
 */

void free_nodes(tokeniza *head)
{
	tokeniza *aux = head;
	tokeniza *auxfree;

	while (aux)
	{
			auxfree = aux;
			aux = aux->next;
			free(auxfree->s);
			free(auxfree);
		}
}

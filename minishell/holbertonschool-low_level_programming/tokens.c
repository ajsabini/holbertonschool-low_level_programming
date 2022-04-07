#include "main.h"

/**
 * addnode - agrega un token
 * @head: pasamos la direccion del head y lo recibe como doble puntero
 * @s: el token
 * Return: void
 */

void addnode(tokeniza **head, char *s)
{
	list_t *headaux = *head;
	list_t *new;

	if (s == NULL)
		printf("error al crear la lista\n");
	else
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
		{
			printf("error al crear la lisa\n");
		}
		else
		{
			new->s = s;
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

void tokenizador(char *env, tokeniza **directorys, const char *delim)
{
	char *path = NULL;

	path = strtok(env, delim);
	while (path != NULL)
	{
		addnode(directorys, path);
		path = strtok(NULL, delim);
	}
}

/**
 * free_nodes - liberamos la lista
 * @head: primer nodo
 * Return: void
 */
void free_nodes(list_t *head)
{
	list_t *aux = head;
	list_t *auxfree;

	while (aux)
	{
			auxfree = aux;
			aux = aux->next;
			free(auxfree);
		}
}

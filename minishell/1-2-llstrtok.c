#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tokeniza
{
	char *str;
	struct tokeniza *next;
} tknza;

void addnode (tknza **head, char *str)
{
	tknza *new = malloc(sizeof(tknza));

	new->str = str;
	new->next = *head;
	*head = new;
}

void print_list(tknza *head)
{
	if (head->next)
		print_list(head->next);
	printf("head->str %s\n", head->str);
}

int main()
{
	char *buffer = NULL;
	size_t bufsize = 0;
	ssize_t characters;
	int cent = 1, i;
	char *dev;
	char delimitador[] = " ";
	char *copia;
	int largo;
	tknza *head = NULL;

	while (cent != 0)
	{
		printf("$ ");
		characters = getline(&buffer,&bufsize,stdin);
		largo = strlen(buffer);
		buffer[largo - 1] = '\0';
		copia = strdup(buffer);
		//printf("el loargo %d\n", largo);
		
			cent = strcmp(buffer,"end-of-file\n");
			if (characters == -1)
			{
				printf("\n");
				break;
			}
			dev = strtok(copia, delimitador);
			while (dev != NULL)
			{
				printf("%s\n",dev);
				addnode(&head,dev);
				dev = strtok(NULL, delimitador);				
			}
			print_list(head);
			free(dev);
	}
	printf("%s",buffer);
	free(buffer);
	free(copia);
	return(0);
}

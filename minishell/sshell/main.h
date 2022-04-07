#ifndef SIMPLESHELL
#define SIMPLESHELL
#define EISDIR 21
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>

extern int errno;
extern char **environ;

/**
 * struct tokenizar - strut para guardar tokens
 * @s: tokens
 * @next: siguiente nodo
 */

typedef struct tokenizar
{
	char *s;
	struct tokenizar *next;
} tokeniza;


char *_strdup(char *str);
int _strlen(char *s);

void addnode(list_t **head, char *s);
void free_nodes(list_t *head);


void tokenizer(char *env, list_t **directorys, const char *delim);
char *_concat(list_t *dir, list_t *input);
int command(list_t *head, char *path_concat);
int get_stat(char *path_concat);
char *getpath();

void function_signal(int sig);
int regular_file(char *s);
int funexit(char *buffer);

int check_directory(list_t *input);
int check_files(list_t *directorys, list_t *input);

int check_slash(char *s);
int check_space(char *s);

#endif


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

/*cheks.c*/
int check_slash(char *buffer);
int check_space(char *buffer);
int check_built(char *buffer);
void change_tabs(char *buffer);

/*ofunctions.c*/
int command(tokeniza *head, char *path_concat);
void _fsignal(int sig);
int _fexit(char *buffer);
char **cpy_environ();

/*ofunctions2.c*/
void dirs(tokeniza **directorys, tokeniza **pwd, tokeniza **old_pwd);
void free_all(char *buffer, tokeniza *old_pwd, tokeniza *pwd, tokeniza *directorys);
int _env(char *buffer);

/*stats.c*/
char *_concat(tokeniza *dir, tokeniza *input);
int get_stat(char *path_concat);

/*strs.c*/
char *_strdup(char *str);
int _strlen(char *str);
/*int _strcmp(char *s1, char *s2)*/

/*gets.c*/
char *get_pwd();
char *get_oldpwd();
char *get_path();

/*tokens*/
void add_node(tokeniza **head, char *s);
void tokenizer(char *env, tokeniza **directorys, const char *delim);
void free_nodes(tokeniza *head);

/*whatis*/
int check_directory(tokeniza *input);
int check_files(tokeniza *directorys, tokeniza *input);
int regular_file(char * path);

#endif


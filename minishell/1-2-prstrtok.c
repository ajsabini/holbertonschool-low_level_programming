#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_list(strtoken *h);
void _strtok(char *buffer, char *c, strtoken **head, ssize_t bytes);
strtoken *addnode(strtoken **head, char *s);




/**
 *
 *
 */
typedef struct token
{
        char *s;
        struct token *next;
} strtoken;
/**
 *
 *
 *
 */
void print_list(strtoken *h)
{
        strtoken *aux = h;
        printf("************** INTENTAMOS IMPRIMIR ******************\n\n");
        while(aux)
        {
                printf("%s", aux->s);
                aux = aux->next;
        }
}

int main()
{
        size_t size = 0;
        ssize_t bytes = 0;
        char *buffer;
        char *strlim;
        strtoken *head = NULL , *aux;
        int str = 1, i = 0, j = 0;

        while (str != 0)
        {
                printf("MYSHELL-$: ");
                bytes = getline(&buffer, &size, stdin);
                _strtok(buffer, " ", &head, bytes);
                str = strcmp("end-of-file\n", buffer);
                if (bytes == -1)
                {
                        printf("\n");
                        break;
                }
                printf("buffer: %s", buffer);
                printf("caracteres leidos: %ld\n", (bytes - 1));
                /*strlim = strtok(buffer, " ");
                while (strlim)
                {
                        printf("strlim: %s\n", strlim);
                        strlim = strtok(NULL, " ");
                }*/

                printf("\n~~~~ahpra imprimimos~~~\n");
                aux = head;
        }

void _strtok(char *buffer, char *c, strtoken **head, ssize_t bytes)
{
        int i = 0, n = 0, cnt = 0, j = 0;
        char *copy;

        for (i = 0; i <= (bytes + 1); i++)
        {
                if (buffer[i] == ' ' || i == bytes)
                {

                        copy = malloc(sizeof(n + 1));
                        for (j = 0; j <= n; j++)
                        {
                                copy[j] = buffer[cnt];
                                cnt++;
                        }
                        copy[j] = '\0';
                        cnt = i;
                        n = 0;
                        addnode(head, copy);
                }
                else
                        n++;
        }
        free(copy);
}

strtoken *addnode(strtoken **head, char *s)
{
        strtoken *new = malloc(sizeof(strtoken));
        strtoken *aux;
        new->next = NULL;


        new->s = s;
        new->next = *head;
        *head = new;
        aux = *head;

        free(new);
        return(new);
}

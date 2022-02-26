#include <stdio.h>

/**
 * main - using sizeof to dynamically determine the size of types char, int and float
 *
 * Return: Always 0.
 */
/*incluye la libreria stdio.h para poder usar printf*/

int main(void)
{
   int n;
   int *p;
   char *c;

   printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
   printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
   printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
   printf("Size of type of my variable n on my computer: %lu bytes\n", sizeof(n));
   printf("Size of pointer int: %lu\n", sizeof(p));
   printf("Size of pointer char: %lu\n", sizeof(c));

   /*
    * %lu espera un unsigned long int
    * */

   /* imprimir la direccion un puntero p */
   printf("Address of variable 'p': %p\n", &p);

  /* imprimir la direccion de la variable n */
    printf("Address of variable 'n': %p\n", &n);

int j;
int *punt; 

j = 98;
 printf("Imprime el variable la variable 'j': %i\n", j);
punt = &n;
/*le asigna al puntero la direccion de memoria de la variable n*/
 printf("Imprime 'punt, que es la direccion de memoria de la variable j': %p\n", punt);
  printf("Imprime '*punt, que es la direccion de memoria de la variable j': %i\n", *punt);
*punt = n;
 printf("Imprime 'punt, que es la direccion de memoria de la variable j': %i\n", *punt);

 /*
  *char c;  
  int *p;  

  p = &c;  

  esto esta mal porque un punter char no pueder ir a una direccion de un int
  *
  */
	

    return (0);
}

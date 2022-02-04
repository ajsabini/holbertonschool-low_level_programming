#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
* main - funcion para saber si es positivo/negativo con if
* Return: 0, hacemos un printf para ver que devuelve la condicion
*/
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */

		if (n > 0)
		{
			printf("%d is positive",n);
		}
		else if (n < 0)
		{
			printf("%d is negative",n);
		}
		else
		{
			printf("%d is zero",n);
		}

		return (0);
}

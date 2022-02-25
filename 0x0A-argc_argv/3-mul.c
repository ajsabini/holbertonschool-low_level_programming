#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplicar los argumentos rcibidos
 * @argc: int
 * @argv: char
 * Return: 0 si hace la multiplicacion, -1 error
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (-1);
	}
}

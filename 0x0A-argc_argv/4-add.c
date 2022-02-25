#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * main - agregar numeros positivos
 * @argc: int
 * @argv: char
 * Return: 0 o 1
 */
int main(int argc, char *argv[])
{
	int i = 1;
	size_t j = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (; i < argc; i++)
		{
			for (; j < strlen(argv[i]); j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}

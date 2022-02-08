#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - print natural numbers to 98
 * @n: x
 * Return: result
 */

void print_to_98(int n)
{

	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
		printf("\n");

	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", n);
	}
}

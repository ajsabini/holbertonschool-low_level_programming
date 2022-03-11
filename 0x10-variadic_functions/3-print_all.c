#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * print_string - imprime los strings
 * @s: parametero string
 * Return: void
 */

void print_string(va_list s)
{
	char *aux = va_arg(s, char*);

	if (aux == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", aux);
}

/**
 * print_integer - imprime los int
 * @i: parametero int
 * Return: void
 */

void print_integer(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_char - imprime char
 * @c: parametro char
 * Return: void
 */

void print_char(va_list c)
{
	printf("%c", (char) va_arg(c, int));
}

/**
 * print_float - imprime los float
 * @f: parametro float
 * Return: void
 */

void print_float(va_list f)
{
	printf("%f", (float) va_arg(f, double));
}

/**
 * print_all - imprimir todo
 * @format: va_list, 
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	char *empty = "", *comma = ", ";
	va_list p;

	opp selector[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(p, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (selector[j].c != NULL)
		{
			if (selector[j].c[0] == format[i])
			{
				printf("%s", empty);
				selector[j].f(p);
				empty = comma;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(p);
}

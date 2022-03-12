#include "variadic_functions.h"


/**
 * print_char - imprime carater
 * @args: va_list on el arg a imprimir
 * Return: asd
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}


/**
 * print_float - imprime float
 * @args: va_list con el arg a imprimir
 * Return: asd
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}


/**
 * print_int - imprime integer
 * @args: va_list con el arg a imprimir
 * Return: asd
 */
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}


/**
 * print_str - imprime string
 * @args: va_list on el arg a imprimir
 * Return: asd
 */

void print_str(va_list args)
{
	const char *str = va_arg(args, const char *);

	if (!str)
		str = "(nil)";
	printf("%s", str);
}


/**
 * print_all - imprime lo que le pasen
 * @format: el formato, on los tipos de args
 * @...: los valores a imprimir
 */
void print_all(const char * const format, ...)
{

	int i, j;
	char *separator = "";

	va_list valist;

	print_t letter[] = {
		{'c', print_char},
		{'s', print_str},
		{'i', print_int},
		{'f', print_float},
		{'\0', NULL}
	};

	va_start(valist, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (letter[j].print != '\0')
		{
			if (letter[j].print == format[i])
			{
				printf("%s", separator);
				letter[j].p(valist);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(valist);

	printf("\n");

}

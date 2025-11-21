#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Write a function that prints number
 * @args: separator numbers
 * Return: numbers separate by ,
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Write a function that prints number
 * @args: separator numbers
 * Return: numbers separate by ,
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Write a function that prints number
 * @args: separator numbers
 * Return: numbers separate by ,
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Write a function that prints number
 * @args: separator numbers
 * Return: numbers separate by ,
 */

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Write a function that prints number
 * @format: separator numbers
 * Return: numbers separate by ,
 */

void print_all(const char *const format, ...)
{
	int i = 0;
	int j = 0;
	char *separtor = "";
	va_list args;

	t_format f_formats[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	
}

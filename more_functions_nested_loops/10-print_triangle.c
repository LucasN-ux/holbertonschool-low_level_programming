#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: caracter to check
 * Return: void
 */

void print_triangle(int size)
{
	int i, s, h;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (s = size - i - 1; s > 0; s--)
			_putchar(' ');
		for (h = 0; h <= i; h++)
			_putchar('#');

		_putchar('\n');
	}
}

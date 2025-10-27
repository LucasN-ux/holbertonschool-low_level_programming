#include "main.h"

/**
 * print_line  - draws a straight line in the terminal.
 * @n: caracter to check
 * Return: void
 */

void print_line(int n)
{
	int result = 0;

	while (result < n)
	{
		_putchar('_');
		result++;
	}
	_putchar('\n');
}

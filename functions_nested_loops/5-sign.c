#include "main.h"

/**
 * print_sign - 1 for great zero, 0 for 0 and -1 for less zero
 * @n: caracter to check
 *
 * Return: int
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}

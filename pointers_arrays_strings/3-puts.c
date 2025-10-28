#include "main.h"

/**
 * _puts - returns the length of a string.
 * @str: point to the entier modified
 * Return: int
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to the string to print
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int count = 0;
	
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
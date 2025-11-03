#include "main.h"

/**
 * s*_memset -  fills memory with a constant byte.
 * @s: buffer to return
 * @b: number to print
 * @n: how many number
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: point to the entier modified
 * Return: vint
 */

int _strlen(char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
		leng++;
	{
		return (leng);
	}
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars,initializes it with a char.
 * @c: char to print
 * @size: the size of the memory to print
 *
 * Return: ar
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(size * sizeof(char));

	if (!ar)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: char
 */
char *_strdup(char *str)
{
	int length = 0;
	char *ar;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length += 1;
	}

	ar = malloc(length + 1 * sizeof(char));

	if (!ar)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		ar[i] = str[i];
	}
	ar[length] = '\0';

	return (ar);
}

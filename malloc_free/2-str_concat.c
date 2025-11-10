#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - returns a pointer to a newly allocated space in memory
 * @s1: pointers
 * @s2: pointers
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *ar;
	int i, j;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	while (s1[len1] != '\0')
		len1 += 1;
	while (s2[len2] != '\0')
		len2 += 1;

	ar = malloc((len1 + len2) + 1 * sizeof(char));

	if (!ar)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		ar[len1 + j] = s2[j];
	}

	ar[len1 + len2] = '\0';

	return (ar);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: pointers
 * @s2: pointers
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2])
		len2++;

	ar = malloc((len1 + len2) + 1 * sizeof(char));

	if (!ar)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		ar[i] = s2[j];
	}

	ar[i] = '\0';

	return (ar);
}

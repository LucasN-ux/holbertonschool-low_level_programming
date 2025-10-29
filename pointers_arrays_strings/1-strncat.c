#include "main.h"

/**
 * _strncat -  concatenates two strings with n octets in src.
 * @dest: point to the entier modified
 * @src: point to the entier modified
 * @n: entier
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

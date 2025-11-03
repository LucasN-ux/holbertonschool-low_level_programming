#include "main.h"

/**
 * _strstr - searches a string for any of a set of bytes.
 * @haystack: dest
 * @needle: characters accepts
 *
 * Return: char _strstr
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[0])
			{
				return (&haystack[i]);
			}
		}
	}
	return (0);
}

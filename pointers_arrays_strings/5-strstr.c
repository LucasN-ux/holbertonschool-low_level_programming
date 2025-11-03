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
	char *h, *n;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (0);
}

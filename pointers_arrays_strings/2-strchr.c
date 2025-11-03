#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @s: value return
 * @c: character to begin
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	if (c == '\0')
	{
		return (&s[i]);
	}
	return (0);
}

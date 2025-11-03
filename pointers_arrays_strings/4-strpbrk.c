#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: dest
 * @accept: characters accepts
 *
 * Return: char _strpbrk
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}

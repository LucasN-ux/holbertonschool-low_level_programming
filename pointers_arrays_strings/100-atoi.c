#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: point to the entier modified
 * Return: int
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int ent = 0;

	while (s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (ent == -1)
			ent = ent * 10 - (s[i] - '0');
		else
			ent = ent * 10 + (s[i] - '0');
		i++;
	}
	return (ent);
}

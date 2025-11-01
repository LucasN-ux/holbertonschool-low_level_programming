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
	unsigned int ent = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		else if (s[i] >= '0' && s[i] <= '9')
		{
			ent = ent * 10 + (s[i] - '0');
			started = 1;
		}
		else if (started)
			break;
		i++;
	}

	return (ent * sign);
}

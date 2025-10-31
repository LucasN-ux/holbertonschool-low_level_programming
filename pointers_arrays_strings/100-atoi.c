#include "main.h"

/**
 * _strcpy - convert a string to an integer.
 * @s: point to the entier modified
 * Return: int
 */

int _atoi(char *s)
{
	int i;
	int sign = 1;

	i = 0;
	

	while ( s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while(s[i] >= '0' && s[i] <= '9')
	{
		i++;
	}
	
	return(0);
}

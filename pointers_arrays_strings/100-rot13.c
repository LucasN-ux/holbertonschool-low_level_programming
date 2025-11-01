#include "main.h"

/**
 * rot13 - Write a function that encodes a string
 * @str: string to encode
 *
 * Return: pointer to str
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
		}
		i++;
	}

	return (str);
}

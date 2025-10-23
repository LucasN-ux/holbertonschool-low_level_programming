#include "main.h"

/**
 * _islower - lowercase 1 uppercase 0
 * @c: caracter to check
 *
 * Return: int
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

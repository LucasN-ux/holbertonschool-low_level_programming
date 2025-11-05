#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: return value
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_help(n, 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: return value
 * @i: possible square root
 * Return: int
 */

int _sqrt_help(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}

	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_help(n, i + 1));
}

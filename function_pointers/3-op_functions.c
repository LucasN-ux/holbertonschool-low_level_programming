#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - sum two integers
 * @a: integer one
 * @b: integer two
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference two integers
 * @a: integer one
 * @b: integer two
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product two integers
 * @a: integer one
 * @b: integer two
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division two integers
 * @a: integer one
 * @b: integer two
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of division two integers
 * @a: integer one
 * @b: integer two
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}

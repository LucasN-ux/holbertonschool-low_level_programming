#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: point to the entier modified
 * @b: point to the entier modified
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

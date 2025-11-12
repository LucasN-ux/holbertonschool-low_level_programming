#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - allocates memory for an array
 * @min: number of elements
 * @max: size of array
 * Return: int
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;
	int total;

	if (min > max)
		return (NULL);

	total = max - min + 1;
	ar = malloc(sizeof(int) * total);
	if (!ar)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		ar[i] = min + i;
	}

	return (ar);
}

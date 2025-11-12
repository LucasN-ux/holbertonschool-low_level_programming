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
	unsigned int i;
	unsigned int total;

	if (min == 0 && max == 0)
		return (NULL);

	if (min > max)
		return (NULL);

	total = max - min + 1;
	ar = malloc(sizeof(int) * (total));
	if (!ar)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		ar[i] = i;
	}

	return (ar);
}

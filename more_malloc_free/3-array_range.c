#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @min: number of elements
 * @max: size of array
 * Return: void *
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;
	int total;

	if (min == 0 && max == 0)
	{
		return (NULL);
	}

	total = max - min;
	ar = malloc(sizeof(int) * (total));
	if (!ar)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		ar[i] = i;
	}

	return (ar);
}
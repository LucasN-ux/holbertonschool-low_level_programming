#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - concatenates two strings.
 * @nmenb: number  of bytes of s2 to concatenate.
 * @size: number  of bytes of s2 to concatenate.
 * Return: char
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	int **grid;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	grid = malloc(nmemb * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		grid[i] = malloc(nmemb * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < size; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}


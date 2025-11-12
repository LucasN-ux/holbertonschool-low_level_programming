#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of array
 * Return: void *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total;
	void *ar;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	total = nmemb * size;

	if (nmemb != 0 && total / nmemb != size)
		return(NULL);

	ar = malloc(total);

	if (!ar)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		((char *)ar)[i] = 0;
	}

	return (ar);
}

#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to reverse
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n / 2)
	{
		int tmp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
		i++;
	}
}

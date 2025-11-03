#include "main.h"

/**
 * s*_memset -  fills memory with a constant byte.
 * @dest: number to return
 * @src: copy to dest
 * @n: number allowed
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

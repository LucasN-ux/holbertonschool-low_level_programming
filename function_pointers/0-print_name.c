#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name:  function to name of the person
 * @f: pointer to funtion
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	
	f(name);
}

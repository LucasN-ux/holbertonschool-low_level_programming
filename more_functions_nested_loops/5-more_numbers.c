#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int line;

	for (line = 0; line <= 14; line++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}

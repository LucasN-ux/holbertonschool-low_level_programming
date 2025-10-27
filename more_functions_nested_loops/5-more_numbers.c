#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int line;

	for (line = 0; line <= 10; line++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar('1');
			}
			
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}

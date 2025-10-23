#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet *10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int line;
	char alphabet;

	for (line = 0; line < 10; line++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		_putchar('\n');
	}
}

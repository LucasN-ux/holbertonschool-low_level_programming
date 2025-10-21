#include <stdio.h>

/**
 * main - prints the digits 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

	putchar('\n');
	return (0);
}

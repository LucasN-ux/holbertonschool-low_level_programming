#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers with ,
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char single_digit;

	for (single_digit = '0'; single_digit <= '9'; single_digit++)
	{
		putchar(single_digit);
		if (single_digit != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - prints 1 to 100, with fizzBuzz multiples
 * Return: int
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
			printf("%d", n);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

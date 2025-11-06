#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: name of program
 * @argv: array contain name of program
 * Return: int.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include "main.h"

/**
 * create_file - reads a text file and prints it
 * @filename: pointer to the name of the file.
 * @text_content: number of letters it should read and print.
 * Return: write
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
		i++;

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}

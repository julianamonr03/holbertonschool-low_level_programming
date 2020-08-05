#include "holberton.h"
/**
 * create_file - Function that creates a file
 * @filename: Name of the file to create
 * @text_content: content
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int open_new, write_new, size_cont = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (; text_content[size_cont]; size_cont++)
		;
	}
	open_new = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	write_new = write(open_new, text_content, size_cont);

	if (write_new == -1 || open_new == -1)
	{
		return (-1);
	}
	close(open_new);
	return (1);
}

#include "holberton.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: Name of the file
 * @text_content: content
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_new, write_new, size_cont = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	open_new = open(filename, O_WRONLY | O_APPEND);

	if (open_new == -1)
	{
		return (-1);
	}

	for (; text_content[size_cont]; size_cont++)
		;

	write_new = write(open_new, text_content, size_cont);

	if (write_new == -1)
	{
		return (-1);
	}
	close(open_new);
	return (1);
}

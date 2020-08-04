#include "holberton.h"
/**
 * read_textfile - Reads a text file and prints it to the standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: Actual numbers it could print and read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file = malloc(sizeof(char) * letters);
	int open_new, read_new, write_new;

	if (filename == NULL || !file)
	{
		return (0);
	}
	open_new = open(filename, O_RDONLY);

	if (open_new == -1)
	{
		return (0);
	}

	read_new = read(open_new, file, letters);
	write_new = write(STDOUT_FILENO, file, read_new);

	if (read_new == -1 || write_new == -1)
	{
		return (0);
	}
	close(open_new);
	free(file);
	return (write_new);
}

#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Create array
 * @size: Size
 * @c: Char
 * Return: Array
 */
char *create_array(unsigned int size, char c)
{
	int a = size;
	char *array;

	if (!size)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(c));

	if (!array)
	{
		return (NULL);
	}
	while (a)
	{
		array[--a] = c;
	}
	return (array);
}

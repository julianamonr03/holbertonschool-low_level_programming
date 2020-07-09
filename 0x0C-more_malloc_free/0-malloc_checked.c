#include "holberton.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: unsigned int
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	int *point;

	point = malloc(b);

	if (point == NULL)
	{
		exit(98);
	}

	return (point);
}

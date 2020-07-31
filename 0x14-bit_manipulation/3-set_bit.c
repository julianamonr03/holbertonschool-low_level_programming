#include "holberton.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: int
 * @index: index starting from 0
 * Return: 1 if it worked or -1 if it failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64 || !n)
	{
		return (-1);
	}
	*n = (1 << index) | *n;

	return (1);
}

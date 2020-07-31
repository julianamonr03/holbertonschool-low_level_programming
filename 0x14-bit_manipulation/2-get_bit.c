#include "holberton.h"
/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: int
 * @index: index starting from 0
 * Return: returns the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	i = (n >> index) & 1;

	if (index >= 64)
	{
		return (-1);
	}
	return (i);
}

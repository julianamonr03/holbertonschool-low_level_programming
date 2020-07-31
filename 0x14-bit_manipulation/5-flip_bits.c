#include "holberton.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: long int
 * @m: long int
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int cont = 0;

	d = m ^ n;

	while (d)
	{
		cont +=  d & 1;
		d >>= 1;

	}
	return (cont);
}

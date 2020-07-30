#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int result = 0;
	int cont = 0;
	int pow = 1;

	if (b == NULL)
	{
		return (0);
	}

	while (b[cont] != '\0')
	{
		cont++;
	}
	cont--;

	while (cont >= 0)
	{
		if (b[cont] != '1' && b[cont] != '0')
		{
			return (0);
		}

		result += (b[cont] - 48) * pow;
		pow *= 2;
		cont--;
	}

	return (result);
}

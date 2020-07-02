#include "holberton.h"
/**
 * factorial - Factorial of a given number
 * @n: number given
 * Return: factorial of given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

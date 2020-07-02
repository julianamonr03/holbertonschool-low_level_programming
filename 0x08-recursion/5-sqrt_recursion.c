#include "holberton.h"
/**
 * natural_square - Find the natural square of a number
 * @x:
 * @n:
 * Return: Natural square
 */
int natural_square(int x, int n)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	x++;
	return (natural_square(x, n));
}
/**
 * _sqrt_recursion - Return the natural square of a number
 * @n: Number given
 * Return: natural square of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (natural_square(2, n));
}

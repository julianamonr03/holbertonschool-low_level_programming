#include "holberton.h"
/**
 * _pow_recursion - Returns value of x raised to y
 * @x: int
 * @y: power
 * Return: Value of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

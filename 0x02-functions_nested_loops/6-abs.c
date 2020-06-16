#include "holberton.h"
/**
 * _abs - entry point
 * @c: integer input
 * Return: Absolute value of c
 */
int _abs(int c)
{
	return (c * ((c > 0) - (c < 0)));
}

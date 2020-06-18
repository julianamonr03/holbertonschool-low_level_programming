#include "holberton.h"
/**
 * _isdigit - Entry point
 * @c: check int
 * Return: If c is a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "holberton.h"
/**
 * _isalpha - entry point
 * @c: int check
 * Return: 1 if TRUE or 0 if FALSE
 */
int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "holberton.h"
/**
 * _isalpha - entry point
 * @c: int check
 * Return: 1 if TRUE or 0 if FALSE
 */
int _isalpha(int c)
{
	int b;

	b = isalpha(c);
	if (b == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}

}

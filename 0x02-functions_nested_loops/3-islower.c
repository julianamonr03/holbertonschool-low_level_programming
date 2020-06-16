#include "holberton.h"
/**
 * _islower - entry point
 * @c: int check
 * Return: 1 (TRUE) 0 (FALSE)
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

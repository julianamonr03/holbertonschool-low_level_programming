#include "holberton.h"
/**
 * _islower - entry point
 * @c: int check
 * Return: 1 (TRUE) 0 (FALSE)
 */
int _islower(int c)
{
	int a;

	a = islower(c);
	if (a == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

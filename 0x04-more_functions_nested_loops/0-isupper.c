#include "holberton.h"
/**
 * _isupper - Entry point
 *@c: int check
 * Return: is is uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "holberton.h"
/**
 *_strlen_recursion - Returns the lenght of a string
 * @s: String
 * Return: Number os elements in string
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

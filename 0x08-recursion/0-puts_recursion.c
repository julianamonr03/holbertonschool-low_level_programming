#include "holberton.h"
/**
 * _puts_recursion - Prints a string
 * @s: String to print
 * Return: No return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
	_putchar('\n');
	}
}

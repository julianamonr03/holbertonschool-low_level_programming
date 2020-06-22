#include "holberton.h"
/**
 * _puts - Entry point
 *@str: string
 *
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
